/*
 * Checks if a string can be converted to a signed integer.
 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INT_LEN 11  // [+/-][0-9]{10}

void shift_left(char* string);
_Bool check_overflow(const char* number, int sign);
_Bool is_integer(const char* s);

char g_int_max[MAX_INT_LEN + 1], g_int_min[MAX_INT_LEN + 1];

int main(int argc, char* argv[])
{
        int sign;  // -1 or 1
        char* number;

        if (argc != 2) {
                fprintf(stderr, "Usage: atoi <number>\n");
                return EXIT_FAILURE;
        }

        // Convert constants INT_MAX and INT_MIN to strings.
        sprintf(g_int_max, "%d", INT_MAX);
        sprintf(g_int_min, "%d", INT_MIN);
        shift_left(g_int_min);  // remove minus sign

        number = argv[1];

        // Check if valid signed integer value
        if (!is_integer(number)) {
                fprintf(stderr, "Error: <number> must be a valid integer value\n");
                return EXIT_FAILURE;
        }

        sign = (number[0] == '-') ? -1 : 1;

        // Remove sign
        if (number[0] == '-' || number[0] == '+')
                shift_left(number);

        if (check_overflow(number, sign)) {
                fprintf(stderr, "Error: <number> must be from %d to %d\n",
                        INT_MIN, INT_MAX);
                return EXIT_FAILURE;
        }

        return EXIT_SUCCESS;
}

/* Returns 1 if overflow occurs else 0 */
_Bool check_overflow(const char* number, int sign)
{
        int number_len;

        number_len = strlen(number);

        if (number_len > MAX_INT_LEN - 1)  // minus sign
                return 1;

        if (number_len == MAX_INT_LEN - 1) {
                for (int i = 0; i < number_len; ++i) {
                        if (sign > 0) {
                                if (number[i] > g_int_max[i])
                                        return 1;
                                else if (number[i] < g_int_max[i])
                                        return 0;
                        } else {
                                if (number[i] > g_int_min[i])
                                        return 1;
                                else if (number[i] < g_int_min[i])
                                        return 0;
                        }
                }
        }

        return 0;
}

/* Shift each character one position to left. */
void shift_left(char* s)
{
        int i, s_len;

        for (i = 1, s_len = strlen(s); i < s_len; ++i)
                s[i - 1] = s[i];

        s[i - 1] = '\0';
}

/* Returns 1 if s[0] is '+' || '-' or digit and following chars are digits. */
_Bool is_integer(const char* s)
{
        int i = 0;

        if (s[i] == '-' || s[i] == '+')
                ++i;

        for (; s[i] != '\0'; ++i)
                if (s[i] < '0' || s[i] > '9')
                        return 0;
        return 1;
}
