#include <ctype.h>
#include <stdio.h>
#include <string.h>
int get_line(char line[], int size)
{
        int c, i;

        i = 0;
        while ((c = getchar()) != '\n' && c != EOF && i < size - 1) {
                line[i] = c;
                ++i;
        }

        if (c == '\n') {
                line[i] = c;
                ++i;
        }

        line[i] = '\0';

        return i;
}

void remove_spaces(char line[])
{
        for (int i = strlen(line) - 1; i >= 0 && isspace(line[i]); --i)
                line[i] = '\0';
}

int main(void)
{
        int len;
        char string[1024];

        while ((len = get_line(string, sizeof(string))) > 0)
                if (len != 1) {
                        remove_spaces(string);
                        printf("%s\n", string);
                }
        return 0;
}
