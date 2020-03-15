#include <stdio.h>
#include <limits.h>

int main(void)
{
        char str_number[20];

        sprintf(str_number, "%d", INT_MAX);

        printf("String: %s\n", str_number);

        return 0;
}
