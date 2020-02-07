#include <stdio.h>
#include <school.h>

// 2^^5 == 2^^4 * 2
int power(int n, int exp)
{
        if (exp == 0)
                return 1;
        if (exp == 1)
                return n;
        return power(n, exp - 1) * n;
}

int main(void)
{
        for (int i = 0; i < 10; ++i) {
                printf("2 ** %d is %d\n", i, power(2, i));
        }
        return 0;
}
