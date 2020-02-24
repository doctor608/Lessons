#include <stdio.h>
#include <school.h>

int main(void)
{
        char original[256];
        char copy[256];

        printf("Enter a string: ");
        size_t len = get_line(original, sizeof(original));

        for (unsigned int i = 0; i < len; ++i)
                copy[i] = original[i];
        copy[len] = '\0';

        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);
        return 0;
}
