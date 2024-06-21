#include<stdio.h>

int main()
{
	int a=10, b=20;
	int r;
	r = printf("Sum\n");
	printf("Number of characters printed : %d\n", r);
	printf("%d + %d = %d\n",a, b, a+b);
	printf("Number of characters printed : %d\n", r);
	return 0;
}
