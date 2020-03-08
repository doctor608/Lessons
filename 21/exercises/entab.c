#include <stdio.h>
#include <string.h>

#define TAB 8
#define MAX_LINE 256

int check_next(char line[], int count, char c)
{
        for (int i = 0; i < count; ++i) {
                if (line[i] != c)
                        return 0;
        }
        return 1;
}

int main(void)
{
        int i, len;
        char line[MAX_LINE];

        while (fgets(line, MAX_LINE, stdin)) {
                len = strlen(line);
                for (i = 0; i < len - TAB + 1; ++i) {
                        if (line[i] == ' ' && check_next(line + i + 1, TAB - 1, ' ')) {
                                putchar('\t');
                                i += TAB - 1;
                        } else
                                putchar(line[i]);
                }
                printf("%s", line + i);
        }

        return 0;
}
