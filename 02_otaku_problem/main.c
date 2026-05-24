#include <stdio.h>

int main(void) {
    int l, s;
    int count = 0;

    scanf("%d%d", &l, &s);

    while (s != l) {
        if (s < l) {
            s = s + 5;
            count = count + 1;
        } else {
            s = s - 2;
            count = count + 1;
        }
    }

    printf("%d", count);

    return 0;
}
