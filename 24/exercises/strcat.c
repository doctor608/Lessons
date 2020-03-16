/*
 * Usage: strncat apple banana
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strcat_(char* s1, const char* s2);
char* strncat_(char* s1, const char* s2, size_t n);

int main(int argc, char* argv[])
{
        if (argc != 3) {
                fprintf(stderr, "Usage: strncat apple banana\n");
                return EXIT_FAILURE;
        }

        const char* apple = argv[1];
        const char* banana = argv[2];

        int apple_len = strlen(apple);
        int banana_len = strlen(banana);

        char dest[apple_len + banana_len + 1];

        strcpy(dest, apple);
        printf("Result is %s\n", strcat_(dest, banana));

        return EXIT_SUCCESS;
}

char* strcat_(char* s1, const char* s2)
{
        int i, j;

        for (i = 0; s1[i] != '\0'; ++i);
        for (j = 0; s1[i] = s2[j]; ++i, ++j);

        return s1;
}

char* strncat_(char* s1, const char* s2, size_t n)
{
         
}
