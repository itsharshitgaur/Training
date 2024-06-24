#include<stdio.h>
#include<string.h>
int main()
{
	char src[] = "This is a long statement to be copied";
	char dest[20];
	strncpy(dest, src, sizeof(dest)-1);
	dest[sizeof(dest)-1] = '\0';
	printf("Source : %s\n", src);
	printf("Destination : %s\n", dest);
	return 0;
}
