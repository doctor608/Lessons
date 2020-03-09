#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int atoi(const char s[]);

int main(int argc, char* argv[])
{
        if (argc < 2) {
                fprintf(stderr, "Usage: atoi <num>\n");
                return EXIT_FAILURE;
        }

        printf("%d\n", atoi(argv[1]));

        return 0;
}

int atoi(const char s[])
{
        int i, num;

        for (i = 0, num = 0; s[i] >= '0' && s[i] <= '9' && s[i] != '\0'; ++i)
                num = num * 10 + (s[i] - '0');

        return num;
}
