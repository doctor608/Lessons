#include <stdio.h>
#include <school.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 100

/*
 * If 'search' in 'array' returns its index.
 * If not found returns -1.
 */
int linear_search(int array[], int size, int search)
{
        if (array[0] == search)
                return 1;

        if (size == 1)
                return 0;

        return linear_search(array + 1, size - 1, search);
}

void randomize_array(int array[], int size)
{
        srand(time(NULL));
        for (int i = 0; i < size; ++i)
                array[i] = rand() % 101;
}


int main(void)
{
        int array[SIZE];
        randomize_array(array, SIZE);

        int num;
        printf("Enter number (0..%d): ", SIZE);
        scanf("%d", &num);

        print_array(array, SIZE);

        if (linear_search(array, SIZE, num))
                printf("%d is found\n", num);
        else
                printf("%d not found\n", num);

        return 0;
}
