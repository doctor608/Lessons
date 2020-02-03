#include <math.h>
#include <stdio.h>

int hypotenuse(int, int);

int main(void)
{
        int sides1[] = { 3, 5, 8 };
        int sides2[] = { 4, 12, 15 };

        for (int i = 0; i < 3; ++i)
                printf("For triangle with cathets %d and %d, hypotenuse is %d\n",
                        sides1[i], sides2[i], hypotenuse(sides1[i], sides2[i]));

        return 0;
}























int hypotenuse(int cathet1, int cathet2)
{
        return sqrt(cathet1 * cathet1 + cathet2 * cathet2);
}
