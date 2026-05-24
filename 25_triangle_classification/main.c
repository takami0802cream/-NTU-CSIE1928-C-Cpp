#include <stdio.h>
#include <math.h>

int main() {
    char name;
    int a, b, c;
    int count_not_triangle = 0, count_acute_angle = 0, count_obtuse_angle = 0, count_right_angle = 0;
    char not_triangle[26] = {0};
    char acute_angle[26] = {0};
    char obtuse_angle[26] = {0};
    char right_angle[26] = {0};

    while (1) {
        int max_side, min_side, mid_side;

        scanf("%c", &name);
        if (name == '-') {
            break;
        }
        scanf("%d%d%d", &a, &b, &c);
        getchar();

        if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
            count_not_triangle++;
            not_triangle[name - 'A'] = 1;
        } else {
            max_side = fmax(a, fmax(b, c));
            min_side = fmin(a, fmin(b, c));
            mid_side = a + b + c - max_side - min_side;

            if (max_side * max_side < min_side * min_side + mid_side * mid_side) {
                count_acute_angle++;
                acute_angle[name - 'A'] = 1;
            } else if (max_side * max_side > min_side * min_side + mid_side * mid_side) {
                count_obtuse_angle++;
                obtuse_angle[name - 'A'] = 1;
            } else {
                count_right_angle++;
                right_angle[name - 'A'] = 1;
            }
        }
    }

    printf("Not Triangle: ");
    {
        int found = 0;
        for (char i = 'A'; i <= 'Z'; i++) {
            if (not_triangle[i - 'A']) {
                if (found) {
                    printf(",");
                }
                printf("%c", i);
                found = 1;
            }
        }
        if (!found) {
            printf("None");
        }
    }
    printf("\n");

    printf("Acute Angle: ");
    {
        int found = 0;
        for (char i = 'A'; i <= 'Z'; i++) {
            if (acute_angle[i - 'A']) {
                if (found) {
                    printf(",");
                }
                printf("%c", i);
                found = 1;
            }
        }
        if (!found) {
            printf("None");
        }
    }
    printf("\n");

    printf("Obtuse Angle: ");
    {
        int found = 0;
        for (char i = 'A'; i <= 'Z'; i++) {
            if (obtuse_angle[i - 'A']) {
                if (found) {
                    printf(",");
                }
                printf("%c", i);
                found = 1;
            }
        }
        if (!found) {
            printf("None");
        }
    }
    printf("\n");

    printf("Right Angle: ");
    {
        int found = 0;
        for (char i = 'A'; i <= 'Z'; i++) {
            if (right_angle[i - 'A']) {
                if (found) {
                    printf(",");
                }
                printf("%c", i);
                found = 1;
            }
        }
        if (!found) {
            printf("None");
        }
    }
    printf("\n");

    return 0;
}
