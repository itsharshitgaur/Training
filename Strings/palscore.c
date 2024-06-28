#include <stdio.h>
#include <string.h>

int score_of_string(char *str) 
{
	int n = strlen(str);
	int score = 0;
	
	for (int i = 0; i <= n - 4; ++i) 
	{
		if (str[i] == str[i + 3] && str[i + 1] == str[i + 2]) 
		{
			score += 5;
		}
	}
	
	for (int i = 0; i <= n - 5; ++i) 
	{
		if (str[i] == str[i + 4] && str[i + 1] == str[i + 3]) 
		{
			score += 10;
		}
	}
	
	return score;
}

int main() 
{
	char str[] = "abcbabcba";
	int result = score_of_string(str);
	
	printf("%d\n", result);
	
	return 0;
}

