#include "arraylist.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    ArrayList numbers;
    arraylist_init(&numbers, 10);

    srand(time(NULL));

    for (int i = 0; i < 20; ++i) {
        arraylist_push_back(&numbers, rand() % 101);
    }

    for (int i = 0; i < arraylist_size(&numbers); ++i) {
        printf("%d, ", arraylist_get(&numbers, i));
    }
    puts("\b\b");

    arraylist_sort(&numbers);

    for (int i = 0; i < arraylist_size(&numbers); ++i) {
        printf("%d, ", arraylist_get(&numbers, i));
    }
    puts("\b\b");

    return 0;
}