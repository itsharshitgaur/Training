#include <stdio.h>
#include<stdlib.h>
#define MAX 100
int comp(const void *i, const void *j)
{
    return *(int *)i - *(int *)j;
}
int main() {
    int n, res;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(&arr[0], n, sizeof(int), &comp);
    for(int i=0; i<n; i++)
    {
        if(arr[i] != i+1)
        {
            res = i+1;
            break;
        }
    }
    printf("%d is missing.\n", res);
    return 0;
}
