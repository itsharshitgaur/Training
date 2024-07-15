#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// Function prototypes
int sum_array(int arr[], int size);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <array_size> <array_elements...>\n", argv[0]);
        return 1;
    }

    int array_size = atoi(argv[1]);

    if (argc != (array_size + 2)) {
        fprintf(stderr, "Incorrect number of array elements provided.\n");
        return 1;
    }

    int array[array_size];

    // Convert command-line arguments to integers and populate the array
    for (int i = 0; i < array_size; ++i) {
        array[i] = atoi(argv[i + 2]);
    }

    // Calculate number of elements each child process will handle
    int num_children = array_size - 1;  // One less child than array elements
    int elements_per_child = array_size / num_children;
    int remainder = array_size % num_children;

    pid_t pid;
    int sums[num_children];
    int child_count = 0;
    int start_index = 0;

    // Create child processes
    for (int i = 0; i < num_children; ++i) {
        pid = fork();

        if (pid < 0) {
            fprintf(stderr, "Fork failed!\n");
            return 1;
        } else if (pid == 0) {
            // Child process
            int sum = sum_array(array + start_index, elements_per_child + (i < remainder ? 1 : 0));
            exit(sum);
        } else {
            // Parent process keeps track of child process IDs
            child_count++;
            start_index += elements_per_child + (i < remainder ? 1 : 0);
        }
    }

    // Parent process waits for all children to terminate and collects their sums
    int total_sum = 0;
    int child_status;
    for (int i = 0; i < child_count; ++i) {
        wait(&child_status);
        if (WIFEXITED(child_status)) {
            total_sum += WEXITSTATUS(child_status);
        }
    }

    printf("Sum of array elements: %d\n", total_sum);

    return 0;
}

// Function to compute sum of elements in an array
int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

