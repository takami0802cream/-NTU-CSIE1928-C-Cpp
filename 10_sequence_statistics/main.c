#include <stdio.h>

int main() {
    int num, count = 0, sum = 0, max = 0, min = 2147483647, max_pos = 0, min_pos = 0;
    double avg;

    while (1) {
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        count++;
        sum += num;

        if (num > max) {
            max = num;
            max_pos = count;
        }

        if (num < min) {
            min = num;
            min_pos = count;
        }
    }

    if (count > 0) {
        avg = (double)sum / count;
        printf("%d\n%.1f\n%d\n%d\n%d\n%d\n", sum, avg, max, max_pos, min, min_pos);
    }

    return 0;
}
