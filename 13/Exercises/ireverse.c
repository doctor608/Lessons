#include <stdio.h>

int ireverse(int num);

int main(void)
{
        int num;
        printf("Enter number: ");
        scanf("%d", &num);
        printf("Reversed %d is %d\n", num, ireverse(num));
        return 0;
}

int ireverse(int num)
{
        int rem, res = 0;

        while (num != 0) {
                rem = num % 10;
                res = res * 10 + rem;
                num /= 10;
        }

        return res;
}
