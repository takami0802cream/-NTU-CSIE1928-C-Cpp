#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 128

int main() {
    char input[MAX_LEN];

    while (fgets(input, MAX_LEN, stdin)) {
        int len;

        input[strcspn(input, "\r\n")] = 0;

        if (strcmp(input, "-1") == 0) {
            break;
        }

        len = strlen(input);
        for (int i = 0; i < len; i++) {
            if (islower(input[i])) {
                input[i] = toupper(input[i]);
            }
        }
        printf("%s\n", input);
    }
    return 0;
}
