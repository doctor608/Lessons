#include <stdio.h>
#include <school.h>

int main(void)
{
        char string[128];

        printf("Enter  a string: ");
        fgets(string, sizeof(string), stdin);
        printf("%s", string);

        return 0;
}
