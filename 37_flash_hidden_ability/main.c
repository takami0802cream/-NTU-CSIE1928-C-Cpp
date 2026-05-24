#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *A;
    int sum = 0;
    int count = 0;
    double avg;

    scanf("%d", &N);
    A = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        sum += A[i];
    }
    avg = (double)sum / N;
    for (int i = 0; i < N; i++) {
        if (A[i] > avg) {
            count++;
        }
    }
    printf("%d\n", count);
    free(A);
    return 0;
}
