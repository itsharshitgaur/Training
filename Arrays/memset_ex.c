#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10];
	memset(arr, -1, sizeof(arr));
	for(int i=0; i<10; i++)
	{
		printf("Array[%d] = %d\n", i, arr[i]);
	}
	return 0;
}
