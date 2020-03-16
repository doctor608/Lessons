/*
 *  Usage: strcmp word other_word
 */

#include <stdio.h>
#include <stdlib.h>

int strcmp_(const char* s1, const char* s2);

int main(int argc, char* argv[])
{
        if (argc != 3) {
                fprintf(stderr, "Usage: strcmp word other_word\n");
                return EXIT_FAILURE;
        }

        printf("%d\n", strcmp_(argv[1], argv[2]));

        return EXIT_SUCCESS;
}

int strcmp_(const char* s1, const char* s2)
{
        while (*s1 && (*s1 == *s2)) {
                ++s1;
                ++s2;
        }
        return *s1 - *s2;
}
