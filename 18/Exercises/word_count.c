#include <stdio.h>
#include <string.h>

int main(void)
{
        int words = 0;
        char string[128];

        printf("Enter a string: ");
        fgets(string, sizeof(string), stdin);

        if (string[strlen(string) - 1] == '\n')
                string[strlen(string) - 1] = '\0';

        for (unsigned int i = 0; i < strlen(string); ++i)
                if (string[i] == ' ' || string[i] == '\t')
                        ++words;

        printf("words : %d\n", words);

        return 0;
}
