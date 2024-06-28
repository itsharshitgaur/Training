#include <stdio.h>
#include <string.h>
void removeDuplicates(char *str) {
    int len = strlen(str);
    for(int i=0; i<len-1; i++)
    {
            for(int j=1; j<len; j++)
            {
                if(str[i] = str[j]-1)
                {
                        str[i] = str[i+2];
                }
            }
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    for(int i=0; i<len-1; i++)
    {
            for(int j=1; j<len; j++)
            {
                if(str[i] = str[j]-1)
                {
                        removeDuplicates(str);
                }
                else
                        continue;
            }
    }
    printf("String after removing adjacent duplicates: %s\n", str);
    return 0;
}

