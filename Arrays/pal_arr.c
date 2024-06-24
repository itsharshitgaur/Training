#include<stdio.h>
int main()
{
	int s;
	printf("Size of array : ");
	scanf("%d", &s);
	int arr[s], num, rnum;
	printf("Enter elements : ");
	for (int i=0; i<s; i++)
	{
		scanf("%d", &arr[i]);
	}

