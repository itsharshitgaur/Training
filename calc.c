#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
        printf("Enter the value of b: ");
	scanf("%d", &b);
	printf("Addition of %d and %d is : %d\n",a, b, a+b);
	printf("Subtraction of %d and %d is : %d\n",a, b, a-b);
       	printf("Division of %d and %d is : %d\n",a, b, a/b);
	printf("Multiplication of %d and %d is : %d\n",a, b, a*b);
	return 0;
}
