#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j;

    while (fgets(str, 100, stdin) != NULL) {
        str[strcspn(str, "\r\n")] = 0;

        if (strcmp(str, "-1") == 0) {
            break;
        }

        for (i = 0; i < (int)strlen(str); i++) {
            for (j = 6; j >= 0; j--) {
                printf("%d", (str[i] >> j) & 1);
            }
            printf(",");
        }
        printf("\n");
    }

    return 0;
}
