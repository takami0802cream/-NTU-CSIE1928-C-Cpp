#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x, i, j, k;
    scanf("%d", &x);

    for (i = x; 0 < i; i--) {
        for (k = i - 1; 0 < k; k--) {
            printf(" ");
        }
        for (j = x; i <= j; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
