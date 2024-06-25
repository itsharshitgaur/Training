#include<stdio.h>
int main()
{
	int num, count=0;
	printf("Enter a number : ");
	scanf("%d", &num);
	while(num>0)
	{
		count++;
		num /= 10;
	}
	
	if(num%10 == (num*num)%10)
	{
		printf();
	}
	else
	{

	}
	return 0;
}
