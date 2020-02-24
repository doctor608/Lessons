#include <stdio.h>
#include <school.h>
void print_table(int counts[], int size, char first)
{
        for (int i = 0; i < size; ++i) {
                if (counts[i] != 0) {
                        printf("%c --- %d  ", i + first, counts[i]);
                        for (int j = 0; j < counts[i]; ++j)
                                putchar('*');
                        puts("");
                }
        }
}
int main(void)
{
        int c = 0;
        int digits[10] = {0};
        int upper[26] = {0};
        int lower[26] = {0};
        int punct1[16] = {0};
        int punct2[8] = {0};
        int punct3[6] = {0};
        int punct4[4] = {0};

        while ((c = getchar()) != EOF) {
                if ('0' <= c && c <= '9')
                        ++digits[c - '0'];
                else if ('A' <= c && c <= 'Z')
                        ++upper[c - 'A'];
                else if ('a' <= c && c <= 'z')
                        ++lower[c - 'a'];
                else if ('!' <= c && c <= '/')
                        ++punct1[c - '!'];
                else if (':' <= c && c <= '@')
                        ++punct2[c - ':'];
                else if ('[' <= c && c <= '`')
                        ++punct3[c - '['];
                else if ('{' <= c && c <= '~')
                        ++punct4[c - '{'];

        }

        printf("digits:\n");
        print_table(digits, 10, '0');

        printf("letters:\n");
        print_table(upper, 26, 'A');
        print_table(lower, 26, 'a');

        printf("punctuation:\n");
        print_table(punct1, 16, '!');
        print_table(punct2, 8, ':');
        print_table(punct3, 6, '[');
        print_table(punct4, 4, '{');

        return 0;
}
