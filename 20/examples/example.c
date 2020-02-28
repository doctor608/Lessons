#include <io.h>

#include <stdio.h>

int main(void)
{
        char word[64];

        printf("Enter a word please: ");
        get_word(word, sizeof(word));
        printf("Entered word: '%s'\n", word);

        return 0;
}
