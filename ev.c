#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	if(num % 2 == 0)
	{
		printf("This is an even number\n");
	}
	else if(num % 2 != 0)
	{
		printf("This is an odd number\n");
	}
	return 0;
}
