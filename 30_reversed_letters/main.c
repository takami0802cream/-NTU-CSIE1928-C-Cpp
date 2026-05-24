#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char str[MAX_LEN];

    while (fgets(str, MAX_LEN, stdin) != NULL) {
        str[strcspn(str, "\r\n")] = 0;
        if (strcmp(str, "-1") == 0) {
            break;
        }
        for (int i = 0; i < (int)strlen(str); i++) {
            if (str[i] == 'b') {
                str[i] = 'd';
            } else if (str[i] == 'd') {
                str[i] = 'b';
            } else if (str[i] == 'p') {
                str[i] = 'q';
            } else if (str[i] == 'q') {
                str[i] = 'p';
            }
        }
        printf("%s\n", str);
    }
    return 0;
}
