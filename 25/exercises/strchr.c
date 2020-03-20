#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strchr_(const char* s, int c);
char* strrchr_(const char* s, int c);

int main(int argc, char* argv[])
{
        if (argc != 3 || strlen(argv[2]) != 1) {
                fprintf(stderr, "Usage: strchr <string> <char>\n");
                return EXIT_FAILURE;
        }

        char* res = strchr_(argv[1], argv[2][0]);

        if (res)
                printf("%s\n", res);
        else
                puts("Not found");

        return EXIT_SUCCESS;
}

char* strchr_(const char* s, int c)
{
        while (*s != '\0') {
                if (*s == c)
                        return s;
                ++s;
        }

        return NULL;
}

char* strrchr_(const char* s, int c)
{
        char* last = NULL;

        while (*s != '\0') {
                if (*s == c)
                        last = s;
                ++s;
        }

        return last;
}
