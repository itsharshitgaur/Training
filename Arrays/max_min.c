#include<stdio.h>
int main()
{
	int s;
	printf("Enter the size of the array : ");
	scanf("%d", &s);
	int arr[s];
	printf("Enter array elements :\n");
	for(int i=0; i<s; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max=arr[0], min=arr[0];
	for(int i=0; i<s; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	printf("Maximum : %d\n", max);
	printf("Minimum : %d\n", min);
	return 0;
}
