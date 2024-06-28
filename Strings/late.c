#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 20
int compare_times(char *time1, char *time2) {
    char *token1 = strtok(time1, "/");
    int h1 = atoi(token1);
    token1 = strtok(NULL, "/");
    int m1 = atoi(token1);
    token1 = strtok(NULL, "/");
    int s1 = atoi(token1);

    char *token2 = strtok(time2, "/");
    int h2 = atoi(token2);
    token2 = strtok(NULL, "/");
    int m2 = atoi(token2);
    token2 = strtok(NULL, "/");
    int s2 = atoi(token2);

    if (h1 < h2) return -1;
    if (h1 > h2) return 1;
    if (m1 < m2) return -1;
    if (m1 > m2) return 1;
    if (s1 < s2) return -1;
    if (s1 > s2) return 1;

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    char time1[MAX];
    char time2[MAX];

    for (int i = 0; i < n; ++i) {
        scanf(" %[^\n]", time1);
        scanf(" %[^\n]", time2);

        int result = compare_times(time1, time2);

        if (result < 0) {
            printf("Early\n");
        } else if (result > 0) {
            printf("Late\n");
        } else {
            printf("Equal\n");
        }
    }

    return 0;
}

