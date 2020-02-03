#include <stdio.h>

int isperfect(int num);
void print_dividers(int num);

int main(void)
{
        for (int i = 1; i <= 10000; ++i) {
                if (isperfect(i))
                        printf("%d is perfect \n", i);
        }
        return 0;
}

int isperfect(int num)
{
        int sum = 1;
        for (int i = 2; i < num; ++i) {
                if (num % i == 0)
                        sum += i;
        }
        return num == sum;
}

void print_dividers(int num)
{
        printf("[");
        for (int i = 1; i < num; ++i)
                if (num % i == 0)
                        printf("%d, ", i);
        printf("\b\b]\n");
}
