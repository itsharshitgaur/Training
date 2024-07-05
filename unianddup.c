#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n;
    bool seen = false;
    
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    
    printf("Enter the elements of the array : ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Duplicate elements : ");
    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(isDuplicate) {
            printf("%d\t", arr[i]);
        }
    }
    
    printf("\nUnique elements : ");
    for(int i = 0; i < n; i++) {
        bool isUnique = true;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            printf("%d\t", arr[i]);
        }
    }
    
    printf("\n");
    free(arr);
    return 0;
}

