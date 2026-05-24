#include <stdio.h>

int main() {
    int num, prev_digit = -1, count = 0;

    while (scanf("%d", &num) == 1) {
        if (prev_digit == 1 && num == 9) {
            count++;
        }
        prev_digit = num;
    }

    printf("%d\n", count);

    return 0;
}
