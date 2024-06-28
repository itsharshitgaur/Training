#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
	char str[MAX], substr[MAX], ch;
	int chi = -1, found = 0, chs = -1, i, j;
	printf("Enter a string : ");
	fgets(str, MAX, stdin);
	printf("Enter a substring you want to find the first occurence of : ");
	scanf("%s", substr);
	printf("Enter the character you want to find the first occurence of : ");
	scanf(" %c", &ch);
	for(int i=0; i<strlen(str); i++)
	{
		if(str[i] == ch)
		{
			found = 1;
			chi = i;
			break;
		}
	}
	for (i = 0; i <= strlen(str) - strlen(substr); i++)
	{
        	for (j = 0; j < strlen(substr); j++)
		{
            		if (str[i + j] != substr[j])
			{
                		break;
            		}
        	}
        	if (j == strlen(substr))
		{
            		found = 1;
            		chs = i;
            		break;
		}
    	}
	if (found == 1)
	{
        	if (chi != -1)
		{
            		printf("Character '%c' first occurrence is at index %d\n", ch, chi);
        	}
        	if (chs != -1)
		{
            		printf("Substring '%s' first occurrence is at index %d\n", substr, chs);
        	}
    	}
	else
	{
        	printf("Character or substring not found\n");
    	}
	return 0;
}
