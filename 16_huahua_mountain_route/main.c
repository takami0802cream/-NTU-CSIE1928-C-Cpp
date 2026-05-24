#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a[1000], i = 0, j = 0, sum = 0;
    char input[10];

    while (1) {
        scanf("%s", input);
        if (strcmp(input, "A") == 0) {
            a[0] = 0;
            i++;
        } else if (strcmp(input, "B") == 0) {
            break;
        } else {
            a[i] = atoi(input);
            i++;
        }
    }

    for (j = 1; j < i; j++) {
        if (a[j] == a[j - 1]) {
            sum += 5;
        } else if (a[j] > a[j - 1]) {
            sum += (a[j] - a[j - 1]) * 10;
        } else if (a[j] < a[j - 1]) {
            sum += (a[j - 1] - a[j]) * 6;
        }
    }

    if (a[i - 1] == 0) {
        sum += 5;
    } else if (a[i - 1] > 0) {
        sum += 6;
    }

    printf("%d", sum);

    return 0;
}
