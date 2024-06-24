#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main()
{
	int a[SIZE], i;
	printf("Enter array elements\n");
	for (i=0; i< SIZE; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Array elements: \n");

	for (i=0; i< SIZE; i++)
	{
		printf("Value = %d\t Address = %u\n", a[i], &a[i]);
	}
	return EXIT_SUCCESS;
}
