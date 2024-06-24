#include<stdio.h>
int main()
{
	int s;
	printf("Enter the size of the array : ");
	scanf("%d", &s);
	int arr[s];
        float sum=0, avr;
	printf("Enter the elements of the array : ");
	for(int i=0; i<s; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	avr = sum/s;
	printf("Sum : %0.2f\nAverage : %0.2f\n", sum, avr);
	return 0;
}
