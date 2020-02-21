#include <stdio.h>

size_t strlen(const char *s);

int main(void)
{
        char string[128];

        printf("Enter a string: ");
        fgets(string, sizeof(string), stdin);

        if (string[strlen(string) - 1] == '\n')
                string[strlen(string) - 1] = '\0';

        for (int i = strlen(string) - 1; i >= 0; --i)
                printf("%c ", string[i]);
        puts("");

        return 0;
}
