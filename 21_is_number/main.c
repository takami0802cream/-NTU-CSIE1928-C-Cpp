#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char input[100];

    while (1) {
        int is_integer = 1;

        scanf("%s", input);

        for (int i = 0; input[i] != '\0'; i++) {
            if (!isdigit(input[i])) {
                is_integer = 0;
                break;
            }
        }

        if (!is_integer) {
            printf("is not a number\n");
            continue;
        }

        printf("n=%d\n", atoi(input));
        break;
    }

    return 0;
}
