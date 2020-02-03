#include <stdio.h>

int power(int n, int e);

int main(void)
{
        int num, exponent;

        printf("Enter a number: ");
        scanf("%d", &num);

        printf("Enter an exponent: ");
        scanf("%d", &exponent);

        printf("%d ^ %d is %d\n", num, exponent, power(num, exponent));

        return 0;
}

int power(int n, int e)
{
        int res = 1;

        for (int i = 0; i < e; ++i)
                res *= n;

        return res;
}
