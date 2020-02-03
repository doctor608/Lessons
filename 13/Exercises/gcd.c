#include <stdio.h>

int gcd(int num1, int num2);

int main(void)
{
        int num1, num2;

        printf("Enter 2 integers: ");
        scanf("%d %d", &num1, &num2);
        printf("gcd is %d\n", gcd(num1, num2));

        return 0;
}

int gcd(int num1, int num2)
{
        int gcd = 0;

        for (int i = 1; i <= num1 && i <= num2; ++i) {
                if (num1 % i == 0 && num2 % i == 0)
                        gcd = i;
        }

        return gcd;
}
