#include <math.h>
#include <stdio.h>

#define SIZE 1000000

int isprime(int num);

int main(void)
{
        for (int i = 0; i <= SIZE; ++i) {
                if (isprime(i)) {
                        ;
                }
        }
        return 0;
}

int isprime(int num)
{
        int sqrt_num = sqrt(num);

        if (num <= 1)
                return 0;

        if (num % 2 == 0 && num > 2)
                return 0;

        for (int i = 3; i < sqrt_num; i += 2) {
                if (num % i == 0)
                        return 0;
        }

        return 1;
}

