#include "dynosaur.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <time.h>

int main(void)
{
    Dynosaur dyn_arr;
    dynamic_array_init(&dyn_arr);

    for (int i = 0; i < 1000; ++i)
        dynamic_array_push_back(&dyn_arr, i);

    
    dynamic_array_print(&dyn_arr);

    dynamic_array_del(&dyn_arr);
    return 0;
}