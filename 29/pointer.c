#include <stdio.h>
#include <stdlib.h>

#include <time.h>

void randomize_array(int* array_pointer, int n);

void swap(int* a_ptr, int* b_ptr)
{
    int temp = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = temp;
}

int reverse_number(int n)
{
    return -n;
}

void reverse_number2(int* n_ptr)
{
    *n_ptr = -*n_ptr;
}

void print_array(int* arr, int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%i ", *(arr + i));
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    // int n = -20;
    // int new_n = reverse_number(n);
    // reverse_number2(&n);
    // int a = 24;
    // int b = 32;
    // swap(&a, &b);

    int numbers[10];

    puts("Before: ");
    print_array(numbers, 10);

    randomize_array(numbers, 10);

    puts("After: ");
    print_array(numbers, 10);

    return 0;
}

void randomize_array(int* array_pointer, int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; ++i)
        *(array_pointer + i) = rand() % 101;
}