#include<stdio.h>
#include<stdlib.h>
#include<myheader.h>

int main()
{
	int x=23, y=12;
	printf("Sum = %d\n", add(x, y));
	printf("Difference = %d\n", sub(x, y));
	printf("\n\n");
	return 0;
}
