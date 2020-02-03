#include <stdio.h>

int even(int n);

int main(void)
{
        int numbers[10] = { 4, 5, 1341, 434, 23, 32, 1, 76, -1, 20 };
        for (int i = 0; i < 10; ++i)
                if (even(numbers[i]))
                        printf("%d is even\n", numbers[i]);
                else
                        printf("%d is odd\n", numbers[i]);
        return 0;
}

int even(int n)
{
        return n % 2 == 0;
}
