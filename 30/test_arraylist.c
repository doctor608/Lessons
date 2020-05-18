#include "arraylist.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    ArrayList numbers;
    arraylist_init(&numbers, 10);

    arraylist_print(&numbers);

    arraylist_reverse(&numbers);

    arraylist_print(&numbers);

    arraylist_del(&numbers);
    return 0;
}