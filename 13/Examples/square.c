#include <stdio.h>

int square(int num)
{
        return num * num;
}

int main(void)
{
        for (int i = 1; i <= 10; ++i) {
                printf("%d  ", square(i));
        }
        printf("\n");
        return 0;
}
