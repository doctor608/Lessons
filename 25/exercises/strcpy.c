#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 16

char* strcpy_(char* dest, const char* src);
char* strncpy_(char* dest, const char* src, size_t n);

int main(int argc, char* argv[])
{
        char dest[MAX_SIZE];

        if (argc != 2) {
                fprintf(stderr, "Usage: strcpy <string>\n");
                return EXIT_FAILURE;
        }

        printf("%s\n", strncpy_(dest, argv[1], MAX_SIZE));

        for (int i = 0; i < MAX_SIZE; ++i)
                printf("%i ", dest[i]);
        puts("\b");

        return EXIT_SUCCESS;
}

char* strcpy_(char* dest, const char* src)
{
        for (int i = 0; (dest[i] = src[i]) != '\0'; ++i);
        return dest;
}


char* strncpy_(char* dest, const char* src, size_t n)
{
        size_t i;

        for (i = 0; i < n - 1 && (dest[i] = src[i]) != '\0'; ++i);

        if (dest[i] != '\0')
                dest[i++] = '\0';
        else {
                for (; i < n; ++i)
                        dest[i] = '\0';
        }

        return dest;
}
