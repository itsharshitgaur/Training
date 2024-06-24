#include<stdio.h>
int main()
{
	int arr[5];
	printf("arr = %u\n&arr = %u\n",arr, &arr);
	printf("arr+1 = %u\n&arr+1 = %u\n", arr+1, &arr+1);
	return 0;
}
