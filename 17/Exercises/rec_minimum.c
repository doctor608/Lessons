#include <stdio.h>
#include <school.h>

int min(int a, int b)
{
        return (a < b) ? a : b;
}

int rec_min(int array[], int n)
{
        printf("array[0] is %d\n", array[0]);
        if (n == 1)
                return array[0];
        return min(array[0], rec_min(array + 1, n - 1));
}


int main(void)
{
        int array[] = {10, 24, -100, 555, -10000, 2, 0};
        printf("min is %d\n", rec_min(array, 7));
        return 0;
}
