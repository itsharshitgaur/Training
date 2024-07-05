#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 100
bool cons(char *a, char *b, char *c)
{
	int ca[26] = {0};
	int cb[26] = {0};
	int cc[26] = {0};
	for(int i=0; a[i] != '\0'; i++)
	{
		ca[a[i] - 'a']++;
	}
	for(int i=0; b[i] != '\0'; i++)
        {
                cb[b[i] - 'a']++;
        }
	for(int i=0; c[i] != '\0'; i++)
        {
                cc[c[i] - 'a']++;
        }
	for(int i=0; i<26; i++)
	{
		if(cc[i] <  ca[i] + cb[i])
		{
			return false;
		}
	}
	return true;

}
int main()
{
	char a[MAX], b[MAX], c[MAX];
	printf("Enter string a : ");
	scanf("%s", a);
	printf("Enter string b : ");
        scanf("%s", b);
	printf("Enter string c : ");
        scanf("%s", c);
	if(cons(a, b, c))
	{
		printf("String c can be constructed using strings a and b.\n");
	}
	else
	{
		printf("String c can not be constructed using strings a and b.\n");
	}
	return 0;
}
