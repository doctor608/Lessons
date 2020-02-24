#include <stdio.h>
#include <school.h>

int main(void)
{
        int i, c;
        int space, other;
        int digits[10];

        space = other = 0;
        for (i = 0; i < 10; ++i)
                digits[i] = 0;

        while ((c = getchar()) != EOF) {
                if ('0' <= c && c <= '9')
                        ++digits[c - '0'];
                else if (c == ' ' || c == '\n' || c == '\t')
                        ++space;
                else
                        ++other;
        }

        printf("digits:\n");
        for (i = 0; i < 10; ++i)
                printf("%d - %d\n", i, digits[i]);
        printf("spaces: %d, other: %d\n", space, other);

        return 0;
}
