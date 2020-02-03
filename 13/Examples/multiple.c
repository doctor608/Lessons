#include <stdio.h>

int multiple(int num, int mult);

int main(void)
{
        if (multiple(20, 5))
                printf("5 is a multiple of 20\n");

        if (multiple(20, 6))
                ;
        else
                printf("6 is not a multiple of 20\n");

        return 0;
}

int multiple(int num, int mult)
{
        return num % mult == 0;
}
