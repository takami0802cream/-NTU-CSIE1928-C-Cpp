#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_string(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char str1[1000], str2[1000];
    char *words1[100], *words2[100];
    char *merged[200];
    int n1 = 0, n2 = 0, n_merged = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    words1[n1++] = strtok(str1, "; \n");
    while ((words1[n1] = strtok(NULL, "; \n")) != NULL) {
        n1++;
    }

    words2[n2++] = strtok(str2, ", \n");
    while ((words2[n2] = strtok(NULL, ", \n")) != NULL) {
        n2++;
    }

    for (int i = 0; i < n1; i++) {
        int duplicate = 0;
        for (int j = 0; j < n_merged; j++) {
            if (strcmp(words1[i], merged[j]) == 0) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            merged[n_merged++] = words1[i];
        }
    }

    for (int i = 0; i < n2; i++) {
        int duplicate = 0;
        for (int j = 0; j < n_merged; j++) {
            if (strcmp(words2[i], merged[j]) == 0) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            merged[n_merged++] = words2[i];
        }
    }

    qsort(merged, n_merged, sizeof(char *), cmp_string);

    for (int i = 0; i < n_merged; i++) {
        printf("%s ", merged[i]);
    }

    return 0;
}
