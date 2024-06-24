#include<stdio.h>
#include<string.h>

int btod(char *b)
{
	int length = strlen(b);
   	int decimal = 0;
    	int base = 1;

    	for (int i = length - 1; i >= 0; i--) {
        	if (b[i] == '1')
		{
            		decimal += base;
        	}
        	base *= 2;
    	}
    	return decimal;
}

int main()
{
	int dec;
	char bin[32];
	printf("Enter a binary number : ");
	scanf("%s", &bin);
	dec = btod(bin);
	printf("Decimal Value : %d\n", dec);
	return 0;
}
