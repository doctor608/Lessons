#include <stdio.h>

void rec_print_array(int array[], int n)
{
        if (n == 0)
                return;

        rec_print_array(array, n - 1);

        printf("%d, ", array[n - 1]);
}


void Print_Array(int array[], int n)
{
        for (int i = 0; i < n; ++i)
                printf("%d ", array[i]);
        puts("\n");
}

int main(void)
{
        int array[30];
        for (int i = 0; i < 30; ++i)
                array[i] = i + 1;

        Print_Array(array, 30);
        rec_print_array(array, 30);

        return 0;
}
