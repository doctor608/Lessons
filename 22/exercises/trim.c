#include <ctype.h>
#include <stdio.h>
#include <string.h>

void trim_right(char line[])
{
        int i;

        for (i = strlen(line) - 1; isspace(line[i]) && i >= 0; --i);
        line[i + 1] = '\0';
}

int main(void)
{
//        char line[] = "Lol               \n";
        char line[] = "         \n";
        trim_right(line);
        printf("'%s'\n", line);
}
