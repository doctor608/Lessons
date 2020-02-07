#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <school.h>

int factorial(int num)
{
        if (num <= 1)
                return 1;
        return factorial(num - 1) * num;
}

int fibonacci(int pos)
{
        if (pos == 1)
                return 0;
        if (pos == 2)
                return 1;
        return fibonacci(pos - 1) + fibonacci(pos - 2);
}

int main(void)
{
        for (int i = 1; i <= 10; ++i) {
                printf("fib(%d) is %d\n", i, fibonacci(i));
        }
        return 0;
}
