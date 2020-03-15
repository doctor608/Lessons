#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INT_LEN 11  // [+/-][0-9]{10}

void shift_left(char* string);
_Bool check_overflow(const char* number, int sign);

char g_int_max[MAX_INT_LEN + 1], g_int_min[MAX_INT_LEN + 1];

int main(int argc, char* argv[])
{
        int sign;
        char* number;

        sprintf(g_int_max, "%d", INT_MAX);
        sprintf(g_int_min, "%d", INT_MIN);

        if (argc != 2) {
                fprintf(stderr, "Usage: atoi <number>\n");
                return EXIT_FAILURE;
        }

        number = argv[1];
        sign = (number[0] == '-') ? -1 : 1;

        if (number[0] == '-' || number[0] == '+')  // Remove sign
                shift_left(number);

        if (check_overflow(number, sign)) {
                fprintf(stderr, "Error: <number> must be from %d to %d\n",
                        INT_MIN, INT_MAX);
                return EXIT_FAILURE;
        }

        return EXIT_SUCCESS;
}

/* Returns 1 if Overflows else 0 */
_Bool check_overflow(const char* number, int sign)
{
        int number_len;

        number_len = strlen(number);
        printf("number len is %d\n", number_len);
        printf("number is %s\n", number);
        if (sign > 0) {
                if (number_len > MAX_INT_LEN - 1)
                        return 1;
        } else {
                if (number_len > MAX_INT_LEN)
                        return 1;
        }

        if (number_len == MAX_INT_LEN - 1) {

                if (sign > 0) {
                        for (int i = 0; i < number_len; ++i) {
                                if (number[i] > g_int_max[i])
                                        return 1;
                                else if (number[i] < g_int_max[i])
                                        return 0;
                        }
                } else {
                        // 2147483648
                        for (int i = 0; i < number_len; ++i) {
                                printf("%c %c\n", number[i], g_int_min[i + 1]);
                                if (number[i] > g_int_min[i + 1]) // skip leading '-'
                                        return 1;
                                else if (number[i] < g_int_min[i])
                                        return 0;
                        }
                }
        }

        return 0;
}

void shift_left(char* s)
{
        for (int i = 1, s_len = strlen(s); i < s_len; ++i)
                s[i - 1] = s[i];
}
