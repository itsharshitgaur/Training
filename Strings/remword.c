#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
	char ostr[MAX], word[MAX];
    	printf("Enter a string: ");
    	fgets(ostr, MAX, stdin);
    	if (ostr[strlen(ostr) - 1] == '\n')
	{
        	ostr[strlen(ostr) - 1] = '\0';
    	}
    	printf("Enter the word you want to remove: ");
    	scanf("%s", word);
    	int i, j, len, wordLen, found;
    	len = strlen(ostr);
    	wordLen = strlen(word);
    	for (i = 0; i <= len - wordLen; i++)
	{
        	found = 1;
        	for (j = 0; j < wordLen; j++)
		{
            		if (ostr[i + j] != word[j])
			{
                		found = 0;
                		break;
            		}
        	}
        	if (found == 1)
		{
           		 for (j = i; j <= len - wordLen; j++)
			 {
                		ostr[j] = ostr[j + wordLen];
            		 }
            	len = len - wordLen;
            	ostr[len] = '\0';
            	i--;
        	}
    	}
    	printf("Resulting string after removal: %s\n", ostr);
    	return 0;
}
