#include<stdio.h>
#define MAX 50
int main()
{
	int s1, s2;
	printf("Enter the size of first array : ");
	scanf("%d", &s1);
	printf("Enter the size of the second array : ");
	scanf("%d", &s2);
	int arr1[s1], arr2[s2], arr3[s1+s2];
	printf("Enter elements for first array : ");
	for(int i=0; i<s1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Enter elements for second array : ");
        for(int i=0; i<s2; i++)
        {
                scanf("%d", &arr2[i]);
        }
	for(int i=0; i<s1; i++)
	{
		arr3[i] = arr1[i]; 
	}
	for(int i=0; i<s2; i++)
	{
		arr3[i+s1] = arr2[i];
	}
	printf("New array is : \n");
	for(int i=0; i<s1+s2-1; i++)
	{
    		for(int j=i+1; j<s1+s2; j++)
    		{
        		if(arr3[i]<arr3[j])
       			{
            			arr3[i] = arr3[i] + arr3[j];
            			arr3[j] = arr3[i] - arr3[j];
            			arr3[i] = arr3[i] - arr3[j];
        		}
    		}
	}
	for(int i=0; i<s1+s2; i++)
        {
                printf("%d\t", arr3[i]);
        }
	printf("\n");	
	return 0;
}
