#include <stdio.h>

int main(void) {
    int x, a, b, c, d;

    scanf("%d", &x);

    a = x / 1000;
    b = x / 100 - a * 10;
    c = x / 10 - a * 100 - b * 10;
    d = x - a * 1000 - b * 100 - c * 10;

    printf("%d", a + b + c + d);

    return 0;
}
