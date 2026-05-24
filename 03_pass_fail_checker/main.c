#include <stdio.h>

int main(void) {
    int a, b;

    scanf("%d", &a);
    printf("%d%d", a, b);

    if (a == 1) {
        scanf("%d", &b);

        if (b < 60 && 0 <= b) {
            printf("fail");
        } else if (60 <= b && b <= 100) {
            printf("pass");
        } else {
            printf("score error");
        }
    } else if (a == 2) {
        scanf("%d", &b);

        if (b < 70 && 0 <= b) {
            printf("fail");
        } else if (70 <= b && b <= 100) {
            printf("pass");
        } else {
            printf("score error");
        }
    } else {
        printf("role error");
    }

    return 0;
}
