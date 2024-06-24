#include<stdio.h>
int main()
{
        int s;
        printf("Enter the size of the array : ");
        scanf("%d", &s);
 	int arr[s], rev_arr[s];
	printf("Enter the array elements : ");
	for(int i=0; i<s; i++)
        {
                scanf("%d", &arr[i]);
        }

	for(int i=0; i<s; i++)
	{
		rev_arr[i] = arr[s-1-i];
	}
	printf("Original Array : ");
        for(int i=0; i<s; i++)
        {
                printf("%d\t", arr[i]);
        }
	printf("\n");
	printf("Reversed Array : ");
	for(int i=0; i<s; i++)
        {
                printf("%d\t", rev_arr[i]);
        }
	printf("\n");
	return 0;
}
