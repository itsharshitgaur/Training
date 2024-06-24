#include<stdio.h>
int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int l=arr[0], sl=arr[0];
	for (int i = 1; i < 5; i++) 
	{
        	if (arr[i] > l) 
		{
            		sl = l;
            		l = arr[i];
        	}
	       	else if (arr[i] > sl && arr[i] != l)
	       	{
            		sl = arr[i];
        	}
    	}	

    	printf("%d\n", sl);
	return 0;
}

