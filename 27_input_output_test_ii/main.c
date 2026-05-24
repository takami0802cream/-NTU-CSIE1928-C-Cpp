#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR_LEN 256
#define MAX_STR2_LEN 128

int main() {
    int N;
    char C1, C2;
    double F;
    char S1[MAX_STR_LEN];
    char S2[MAX_STR2_LEN];
    double sum;
    int int_part;
    int len1, len2;

    scanf("%d %c %lf %[^\n] %c %s", &N, &C1, &F, S1, &C2, S2);

    sum = N + F;
    printf("%.2f\n", sum);

    printf("%c %d\n", C1 + N, C1 + N);

    int_part = (int)(C2 + F);
    printf("%c %d\n", int_part, int_part);

    len1 = strlen(S1);
    for (int i = 0; i < len1; i++) {
        printf("%c", tolower(S1[i]));
    }
    printf("\n");

    len2 = strlen(S2);
    for (int i = 0; i < len2; i++) {
        printf("%c", toupper(S2[i]));
    }
    printf("\n");

    return 0;
}
