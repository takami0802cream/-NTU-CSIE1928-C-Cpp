#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[1000], result[1000];
    char words[100][100];
    int i, j = 0, n = 0;

    result[0] = '\0';

    while (fgets(line, 1000, stdin)) {
        int len;

        if (line[0] == '-' && line[1] == '1') {
            break;
        }

        len = strlen(line);
        line[len - 1] = ' ';
        len = strlen(line);

        for (i = 0; i < len; i++) {
            char c = line[i];
            if (c == ' ') {
                words[n][j] = '\0';
                n++;
                j = 0;
            } else if (isalpha(c)) {
                if (c >= 'a' && c <= 'z') {
                    words[n][j++] = (c - 'a' + 23) % 26 + 'a';
                } else if (c >= 'A' && c <= 'Z') {
                    words[n][j++] = tolower((c - 'A' + 23) % 26 + 'A');
                }
            } else if (isdigit(c)) {
                words[n][j++] = c;
            } else if (ispunct(c)) {
                words[n][j++] = c;
            }
        }
    }

    for (i = 0; i < n; i++) {
        strcat(result, words[i]);
        if (i < n - 1) {
            strcat(result, " ");
        }
    }

    printf("%s", result);

    return 0;
}
