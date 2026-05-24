#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x, a, b, c, d, e, f;

    scanf("%d", &x);

    if (x <= 540000) {
        printf("5%% ");
        a = x * 0.05;
        printf("%d ", a);
        printf("0 ");
        printf("%d ", a - 0);
    } else if (540001 <= x && x <= 1210000) {
        printf("12%% ");
        b = x * 0.12;
        printf("%d ", b);
        printf("37800 ");
        printf("%d ", b - 37800);
    } else if (1210001 <= x && x <= 2420000) {
        printf("20%% ");
        c = x * 0.2;
        printf("%d ", c);
        printf("134600 ");
        printf("%d ", c - 134600);
    } else if (2420001 <= x && x <= 4530000) {
        printf("30%% ");
        d = x * 0.3;
        printf("%d ", d);
        printf("376600 ");
        printf("%d ", d - 376600);
    } else if (4530001 <= x && x <= 10310000) {
        printf("40%% ");
        e = x * 0.4;
        printf("%d ", e);
        printf("829600 ");
        printf("%d ", e - 829600);
    } else {
        printf("45%% ");
        f = x * 0.45;
        printf("%d ", f);
        printf("1345100 ");
        printf("%d ", f - 1345100);
    }

    return 0;
}
