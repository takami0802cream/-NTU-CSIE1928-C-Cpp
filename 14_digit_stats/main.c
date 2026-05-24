#include <stdio.h>
#include <math.h>

void calc(int a, int b, double c, int pos) {
    int sum = (a / pos) % 10 + (b / pos) % 10 + ((int)c / pos) % 10;
    double avg = (a / pos % 10 + b / pos % 10 + ((int)c / pos) % 10) / 3.0;
    double sd = sqrt((pow(a / pos % 10 - avg, 2) +
                       pow(b / pos % 10 - avg, 2) +
                       pow(((int)c / pos) % 10 - avg, 2)) /
                      3.0);

    printf("%d %.2f %.2f\n", sum, avg, sd);
}

int main() {
    int a, b;
    double c;
    double sum, avg, sd;

    scanf("%d %d %lf", &a, &b, &c);

    calc(a, b, c, 1000);
    calc(a, b, c, 100);
    calc(a, b, c, 10);
    calc(a, b, c, 1);

    sum = a + b + c;
    avg = (a + b + c) / 3.0;
    sd = sqrt((pow(a - avg, 2) + pow(b - avg, 2) + pow(c - avg, 2)) / 3.0);
    printf("%.2f %.2f %.2f\n", sum, avg, sd);

    return 0;
}
