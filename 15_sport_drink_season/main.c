#include <stdio.h>

int main() {
    int N;
    int caps;
    int extra_cap = 1;
    int total_bottles = 0;

    scanf("%d", &N);

    caps = N;

    while (caps >= 4) {
        int exchanged_bottles = caps / 4;
        total_bottles += exchanged_bottles;
        caps = caps % 4 + exchanged_bottles;
    }

    total_bottles += (caps + extra_cap) / 4;

    printf("%d\n", total_bottles + N);

    return 0;
}
