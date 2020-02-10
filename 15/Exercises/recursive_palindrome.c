#include <stdio.h>
#include <string.h>
#include <school.h>

/*
 * Returns 1 if 'string' is palindrome. 0 otherwise.
 */
int is_palindrome(char string[], int start, int end)
{
        // If there is only one character
        if (start == end)
                return 1;

        // If first and last characters do not match
        if (string[start] != string[end])
                return 0;

        return is_palindrome(string, start + 1, end - 1);
}

/*
BAAAAAAAAD but works.
{
        // If there is only one character
        if (strlen(string) == 1)
                return 1;

        // If first and last characters do not match
        if (string[0] != string[strlen(string) - 1])
                return 0;

        string[strlen(string) - 1] = '\0';

        return is_palindrome(string + 1);
}
*/

int main(void)
{
        char string[32];
        printf("Enter a string (<= 31 chars): ");
        fgets(string, sizeof(string), stdin);

        string[strlen(string) - 1] = '\0';

        if (is_palindrome(string, 0, strlen(string) - 1))
                printf("'%s' is a palindrome\n", string);
        else
                printf("'%s' is not a palindrome\n", string);

        return 0;
}

