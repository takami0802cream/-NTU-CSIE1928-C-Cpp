#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 128

int cmp(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int n;
    char **strings;

    scanf("%d", &n);
    strings = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++) {
        char *str = (char *)malloc(MAX_LEN * sizeof(char));
        scanf("%s", str);
        strings[i] = str;
    }

    qsort(strings, n, sizeof(char *), cmp);

    for (int i = 0; i < n; i++) {
        printf("%s ", strings[i]);
        free(strings[i]);
    }
    free(strings);
    return 0;
}
