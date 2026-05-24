#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    int **grades;
    int total_sum = 0, total_count = 0;

    scanf("%d", &m);
    scanf("%d", &n);

    grades = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        grades[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grades[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        int sum = 0;
        double avg;

        for (int j = 0; j < n; j++) {
            sum += grades[i][j];
        }
        avg = (double)sum / n;
        printf(" class %d \n", i + 1);
        for (int j = 0; j < n; j++) {
            printf(" %d: %d\n", j + 1, grades[i][j]);
        }
        printf(" avg: %.2lf\n", avg);
        total_sum += sum;
        total_count += n;
    }

    printf("avg: %.2lf\n", (double)total_sum / total_count);

    for (int i = 0; i < m; i++) {
        free(grades[i]);
    }
    free(grades);

    return 0;
}
