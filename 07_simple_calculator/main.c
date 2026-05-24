#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double x, y, kekka;
    char z[1];

    scanf("%lf%lf%s", &x, &y, &z);

    if (*z == '/') {
        kekka = x / y;
        printf("%.2lf %s %.2lf = %.2lf", x, z, y, x / y);
    } else if (*z == '*') {
        kekka = x * y;
        printf("%.2lf %s %.2lf = %.2lf", x, z, y, x * y);
    } else if (*z == '-') {
        kekka = x - y;
        printf("%.2lf %s %.2lf = %.2lf", x, z, y, x - y);
    } else {
        kekka = x + y;
        printf("%.2lf %s %.2lf = %.2lf", x, z, y, x + y);
    }

    return 0;
}
