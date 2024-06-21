#include<stdio.h>
int main()
{
	int a = 12, b = 17;
	int and = a&b;
	int or = a|b;
	int ta = ~a;
	int tb = ~b;
	printf("And : %d\nOR : %d\nTilt A : %d\nTilt B : %d\n",and, or, ta, tb);
	printf("Finished\n");
	return 0;
}
