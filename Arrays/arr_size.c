#include<stdio.h>
#define array_size(arr) (sizeof(arr)/sizeof(arr[0]))
int main()
{
	int a[] = {1, 2, 3, 4};
	int b[] = {5, 6, 7, 8, 9};
	int size_a = array_size(a);
	int size_b = array_size(b);
	printf("Array size : %d\n%d\n", size_a, size_b);
	return 0;
}
