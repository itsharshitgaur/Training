#include <stdio.h>
#include<string.h>
#define MAX 100
int main() {
    int n;
    char str[MAX], newStr[MAX], ch;
    printf("Enter a string : ");
    fgets(str, MAX, stdin);
    if(str[strlen(str)-1 == '\n'])
    {
        str[strlen(str)-1] = '\0';
    }
    printf("Enter the character : ");
    scanf("%c", &ch);
    printf("Enter index of the character to be replaced : ");
    scanf("%d", &n);
    str[n] = ch;
    printf("%s\n", str);
    return 0;
}
