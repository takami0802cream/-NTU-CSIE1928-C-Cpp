#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int N, K;
    int *P;
    int median;

    scanf("%d %d", &N, &K);

    P = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &P[i]);
    }

    qsort(P, N, sizeof(int), cmp);

    if (N % 2 == 0) {
        median = P[N / 2 - 1];
    } else {
        median = P[N / 2];
    }

    printf("%d\n", median);

    if (K > median) {
        printf("WINNER WINNER CHICKEN DINNER!\n");
    } else {
        printf("BETTER LUCK NEXT TIME!\n");
    }

    free(P);

    return 0;
}
