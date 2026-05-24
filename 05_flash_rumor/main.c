#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x, i;

    scanf("%d", &x);

    if (1 <= x && x <= 10000) {
        for (i = 1; i <= x; i++) {
            printf("%d", i);
        }
        for (i = x - 1; i >= 1; i--) {
            printf("%d", i);
        }
    }

    printf("\n");

    return 0;
}
