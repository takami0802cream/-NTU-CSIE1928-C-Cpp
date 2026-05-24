#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    char s1[MAX_LEN], s2[MAX_LEN];
    int len1, len2;
    int i, j;

    fgets(s1, MAX_LEN, stdin);
    fgets(s2, MAX_LEN, stdin);
    len1 = strlen(s1);
    len2 = strlen(s2);
    if (s1[len1 - 1] == '\n') {
        s1[--len1] = '\0';
    }
    if (s2[len2 - 1] == '\n') {
        s2[--len2] = '\0';
    }

    for (i = 0; i < len1 - len2 + 1; i++) {
        if (strncmp(s1 + i, s2, len2) == 0) {
            printf("%d\t", i);
            for (j = i - 2; j < i; j++) {
                if (j >= 0) {
                    printf("%c", s1[j]);
                }
            }
            printf("+");
            for (j = 0; j < len2; j++) {
                printf("%c", s2[j]);
            }
            printf("+");
            for (j = i + len2; j < i + len2 + 2; j++) {
                if (j < len1) {
                    printf("%c", s1[j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
