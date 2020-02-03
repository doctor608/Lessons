#include <stdio.h>

int max_of_three(int num1, int num2, int num3);
int min_of_three(int num1, int num2, int num3);

int main(void)
{
        int num1, num2, num3;

        printf("Enter three integers: ");
        scanf("%d %d %d", &num1, &num2, &num3);

        printf("Max number is %d\n", max_of_three(num1, num2, num3));
        printf("Min number is %d\n", min_of_three(num1, num2, num3));

        return 0;
}

int max_of_three(int num1, int num2, int num3)
{
        int max = num1;

        if (num2 > max)
                max = num2;

        if (num3 > max)
                max = num3;

        return max;
}

int min_of_three(int num1, int num2, int num3)
{
        int min = num1;

        if (num2 < min)
                min = num2;

        if (num3 < min)
                min = num3;

        return min;
}
