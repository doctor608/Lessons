#include <stdio.h>
#include <school.h>
#include <string.h>

int main(void)
{
        char string[128];

        printf("Enter  a string: ");
        fgets(string, sizeof(string), stdin);

        string[strlen(string) -1] = '\0';
        printf("length is %ld, %s\n", strlen(string), string);
        return 0;
}
