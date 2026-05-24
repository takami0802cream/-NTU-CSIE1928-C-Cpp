#include <stdio.h>
#include <stdlib.h>

int main() {
    float sum = 0.0f;
    char input[100];

    while (1) {
        char *endptr;
        float num, frac;

        scanf("%s", input);

        if (input[0] == 'q') {
            break;
        }

        num = strtof(input, &endptr);
        if (*endptr != '\0') {
            continue;
        }

        frac = num - (int)num;
        sum += frac;
    }

    printf("%.2f\n", sum);
    return 0;
}
