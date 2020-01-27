#include <stdio.h>
#include <string.h>

int main(void)
{
        char name[32];

        printf("What is your name? ");
        fgets(name, sizeof(name), stdin);

        name[strlen(name)-1] = '\0';

        printf("Hello, %s! How was your day?\n", name);
        return 0;
}
