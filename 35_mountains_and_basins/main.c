#include <stdio.h>

int main() {
    int n, max_height = -10001, min_height = 10001, max_index = -1, min_index = -1;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int height;
        scanf("%d", &height);
        if (height > max_height) {
            max_height = height;
            max_index = i;
        }
        if (height < min_height) {
            min_height = height;
            min_index = i;
        }
    }
    printf("%d %d\n", max_index, max_height);
    printf("%d %d\n", min_index, min_height);
    return 0;
}
