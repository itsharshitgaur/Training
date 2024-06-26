#include <stdio.h>
#include <string.h>
#define MAX 50
int main() {
    char str[MAX];
    char *words[MAX];
    char *token;
    int count = 0, i = 0, j;
    printf("Enter pipe separated words: ");
    fgets(str, MAX, stdin);
    if (str[strlen(str)-1] == '\n')
        str[strlen(str)-1] = '\0';
    token = strtok(str, "|");
    while (token != NULL && count < MAX) {
        words[count] = token;
        count++;
        token = strtok(NULL, "|");
    }
    int duplicateCount = 0;
    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                duplicateCount++;
                break;
            }
        }
    }
    printf("\nTokens:\n");
    for (i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }
    printf("\nNumber of tokens: %d\n", count);
    printf("Number of duplicate tokens: %d\n", duplicateCount);
    return 0;
}

