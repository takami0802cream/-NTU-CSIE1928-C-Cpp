#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    char input[1000000];
    int nums[1000000];
    int i = 0;
    int median;
    char *token;

    fgets(input, sizeof(input), stdin);
    N = atoi(input);
    fgets(input, sizeof(input), stdin);
    token = strtok(input, " ");
    while (token != NULL) {
        nums[i] = atoi(token);
        token = strtok(NULL, " ");
        i++;
    }
    qsort(nums, N, sizeof(int), compare);
    if (N % 2 == 0) {
        median = ceil((nums[N / 2] + nums[N / 2 - 1]) / 2.0);
    } else {
        median = nums[N / 2];
    }
    printf("%d\n", median);
    return 0;
}
