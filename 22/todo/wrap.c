#include <ctype.h>   // isspace()
#include <stdio.h>   // fgets(), getchar(), putchar(), printf()
#include <stdlib.h>  // strtol(), EXIT_SUCCESS
#include <string.h>  // strlen()

#define MAX_LINE 1024

void print_wrap(const char line[], int wrap);

int main(int argc, char* argv[])
{
        int len, wrap;
        char* new_line;
        char line[MAX_LINE];

        wrap = 40;  // default

        if (argc > 1)
                wrap = strtol(argv[1], NULL, 10);

        while (fgets(line, MAX_LINE, stdin)) {
                len = strlen(line);
                if (len < wrap)
                        printf("%s", line);
                else {
                        new_line = line;
                        while (len > wrap) {
                                print_wrap(new_line, wrap);
                                new_line += wrap;
                                len -= wrap;
                        }
                        printf("%s", new_line);
                }
        }

        return EXIT_SUCCESS;
}

void print_wrap(const char line[], int wrap)
{
        int i;

        for (i = 0; i < wrap; ++i)
                putchar(line[i]);
        puts("");
}
