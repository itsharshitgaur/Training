#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{
	char ostr[MAX], frstr[MAX], lrstr[MAX], ch;
	printf("Enter a string : ");
	fgets(ostr, MAX, stdin);
	if (ostr[strlen(ostr) - 1] == '\n') {
        	ostr[strlen(ostr) - 1] = '\0';
    	}
	strcpy(frstr, ostr);
	strcpy(lrstr, ostr);
	printf("Enter the character you want to replace with '!' : ");
	scanf(" %c", &ch);
	for(int i=0; i<strlen(frstr); i++)
	{
		if(frstr[i]==ch)
		{
			frstr[i] = '!';
		       	break;
		}	       
	}
	for(int i=strlen(lrstr) - 1; i>=0; i--)
        {
                if(lrstr[i]==ch)
                {
                        lrstr[i] = '!';
                        break;
                }
        }
	printf("After replacing first occurence of %c with '!'\nNew string is -\n%s\n", ch, frstr);
	printf("After replacing last occurence of %c with '!'\nNew string is -\n%s\n", ch, lrstr);
	return 0;
}
