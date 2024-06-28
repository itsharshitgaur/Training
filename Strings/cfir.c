#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
	char str[MAX];
	printf("Enter a string : ");
	fgets(str, MAX, stdin);
	if(str[strlen(str)-1] == '\n')
	{
		str[strlen(str)-1] = '\0';
	}
	if(str[0]>=97 && str[0] <= 122)
        {
                str[0] -= 32;
        }
	for(int i=1; i<strlen(str); i++)
	{
		if(str[i] == ' ')
		{
			str[i+1] -= 32;
		}
	}
	printf("New string : %s\n", str);
	return 0;
}
