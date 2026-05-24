#include <stdio.h>

int main(void) {
    int x, i;
    int sum = 0;

    scanf("%d", &x);

    for (i = 1; i < x; ++i) {
        printf("%d+", i);
        sum = sum + i;
    }

    sum = sum + x;
    printf("%d", x);
    printf(" = %d", sum);

    return 0;
}
