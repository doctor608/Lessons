#include <ctype.h>   // isspace()
#include <stdio.h>   // fgets(), getchar(), putchar(), printf()
#include <stdlib.h>  // strtol()
#include <string.h>  // strlen()

#define MAX_LINE 1024

void print_wrap(const char line[], int wrap);
_Bool str_is_space(const char line[]);

int main(int argc, char* argv[])
{
        int wrap;
        int len, wrap_count;
        char* new_line;
        char line[MAX_LINE];

        wrap = 40;  // default

        if (argc > 1)
                wrap = strtol(argv[1], NULL, 10);

        while (fgets(line, MAX_LINE, stdin)) {
                len = strlen(line);
                if (str_is_space(line))  // skip empty lines
                        continue;
                else if (len < wrap)
                       printf("%s", line);
                else {
                        wrap_count = 0;
                        new_line = line;
                        while (len > wrap) {
                                print_wrap(new_line, wrap);
                                len -= wrap;
                                new_line += wrap;
                                ++wrap_count;
                        }
                        printf("%s", new_line);
                }
        }

        return 0;
}

void print_wrap(const char line[], int wrap)
{
        int i;

        for (i = 0; i < wrap; ++i)
                putchar(line[i]);

        puts("");
}

_Bool str_is_space(const char line[])
{
        int i;

        for (i = 0; line[i] != '\0'; ++i)
                if (!isspace(line[i]))
                        return 0;
        return 1;
}
