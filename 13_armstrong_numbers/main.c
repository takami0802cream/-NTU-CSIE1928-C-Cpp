#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int sum = 0;
    int digit, originalNum = num;
    int numDigits = log10(num) + 1;

    while (num) {
        digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return (sum == originalNum);
}

void findArmstrong(int start, int end) {
    int found = 0;
    int andpast = 0;

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            if (andpast == 0) {
                found = 1;
                andpast = 1;
                printf("%d", i);
            } else {
                found = 1;
                printf(" & %d", i);
            }
        }
    }

    if (!found) {
        printf("none");
    }
}

int main() {
    int start, end;

    scanf("%d %d", &start, &end);
    findArmstrong(start, end);

    return 0;
}
