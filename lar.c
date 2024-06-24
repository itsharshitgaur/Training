#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three numbers -\n");
	printf("A = ");
	scanf("%d", &a);
	printf("B = ");
        scanf("%d", &b);
	printf("C = ");
        scanf("%d", &c);
	if(a>b && a>c)
	{
		printf("%d is the larger than %d and %d\n",a,b,c);
	}
	else if(b>a && b>c)
        {
                printf("%d is the larger than %d and %d\n",b,a,c);
        }
	else if(c>a && c>b)
        {
                printf("%d is the larger than %d and %d\n",c,a,b);
        }

	return 0;
}
