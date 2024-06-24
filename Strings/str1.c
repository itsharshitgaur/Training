#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int len;
	printf("Enter a string : ");
	//scanf("%[^\n]s", str);
	//printf("%s", str);
	//gets(str);
	//puts(str);
	fgets(str, 15, stdin);
	len  = strlen(str);
	if(str[len-1] == '\n')
	{
		str[len-1] = '\0';
	}
	fputs(str, stdout);
	printf("\n\n");
	return 0;
}
