#include <stdio.h>
#include <string.h>

void string_reverse(const char string[])
{
        for (int i = strlen(string) - 1; i >= 0; --i)
                printf("%c", string[i]);
}

void rec_string_reverse(const char string[])
{
        if (string[0] != '\0') {
                rec_string_reverse(string + 1);
                printf("%c", string[0]);
        }
}

int main(void)
{
        char string[256];

        printf("Enter a string: ");
        fgets(string, sizeof(string), stdin);

        //printf("Length of your string is %ld\n", strlen(string));

        string_reverse(string);
        rec_string_reverse(string);

        return 0;
}
