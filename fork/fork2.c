#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number_of_children>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    pid_t pid;

    printf("Parent process PID: %d\n", getpid());

    for (int i = 0; i < n; ++i) {
        pid = fork();

        if (pid < 0) {
            fprintf(stderr, "Fork failed!\n");
            return 1;
        } else if (pid == 0) {
            // Child process
            printf("Child process PID: %d, Parent PID: %d\n", getpid(), getppid());
            // Exit after printing
            exit(0);
        }
    }

    // Parent process waits for all children to terminate
    for (int i = 0; i < n; ++i) {
        wait(NULL);
    }

    printf("All children have terminated.\n");

    return 0;
}

