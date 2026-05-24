#include <stdio.h>

#define ARRAY_SIZE 5
#define MAX_STAR_COUNT 10

int main() {
    int arr[ARRAY_SIZE];
    int i, j;

    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d\t", arr[i]);
        for (j = 0; j < arr[i] && j < MAX_STAR_COUNT; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
