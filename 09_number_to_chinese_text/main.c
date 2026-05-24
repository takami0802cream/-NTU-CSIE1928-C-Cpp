#include <stdio.h>

int main() {
    int num, digit, i = 1, unit = 10000;
    char *digits[] = {"", "壹", "貳", "參", "肆", "伍", "陸", "柒", "捌", "玖", ""};
    char *units[] = {"", "萬", "仟", "佰", "拾"};

    scanf("%d", &num);

    if (num < 1 || num > 99999) {
        printf("out of range\n");
        return 0;
    }

    while (unit > 0) {
        digit = num / unit;
        if (digit > 0) {
            if (units[i] == NULL) {
                printf("%s", digits[digit]);
            } else {
                printf("%s%s", digits[digit], units[i]);
            }
        }
        if (unit == 1) {
            printf("元整\n");
        }
        num %= unit;
        unit /= 10;
        i++;
    }

    return 0;
}
