#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char* find_token(char* s, char delim);

int main(int argc, char* argv[])
{
        char* token;

        if (argc != 2) {
                fprintf(stderr, "Usage: strtok <str>\n");
                return EXIT_FAILURE;
        }

        printf("%s\n", find_token(argv[1], ' '));

        return EXIT_SUCCESS;
}

char* find_token(char* s, char delim)
{
        const char* begin = s;

        while (*s && *s != delim)
                ++s;

        *s = '\0';
        return begin;
}
