#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char **macs;
    int m = 0, count = 0;

    scanf("%d", &n);

    macs = malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        macs[i] = malloc(18 * sizeof(char));
        scanf("%s", macs[i]);
    }

    while (scanf("%d", &m) == 1) {
        if (m < 0 || m >= n) {
            printf("Invalid index\n");
            continue;
        }
        printf("%s\n", macs[m]);
        count++;
        if (count == n) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        free(macs[i]);
    }
    free(macs);
    return 0;
}
