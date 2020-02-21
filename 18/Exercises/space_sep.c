#include <stdio.h>

size_t strlen(const char *s);

int main(void)
{
        char string[128];

        printf("Enter a string: ");
        fgets(string, sizeof(string), stdin);

        int len = strlen(string);

        if (string[len - 1] == '\n')
                string[len - 1] = '\0';

        for (int i = 0; i < len; ++i)
                printf("%c ", string[i]);
        puts("");

        return 0;
}
