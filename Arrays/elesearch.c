#include<stdio.h>
#include<stdbool.h>
int main()
{
	int s, inf;
	bool status = false;
	printf("Enter the size of the array : ");
	scanf("%d", &s);
	int arr[s];
	printf("Enter the elements of the array : ");
        for(int i=0; i<s; i++)
        {
                scanf("%d", &arr[i]);
        }
	int num;
	printf("Enter the number to search in the array : ");
	scanf("%d", &num);
	for(int i=0; i<s; i++)
        {
                if(arr[i] == num)
		{
			status = true;
			inf = i;
			break;
		}
        }
	if(status == true)
	{
		printf("%d is present in the array at the index number %d\n", num, inf);
	}
	else if(status == false)
	{
		printf("Number not found.\n");
	}
	return 0;
}
