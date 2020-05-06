#include "dynosaur.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <time.h>

void dinamic_array_init(Dynosaur* dyn_arr)
{
    dyn_arr->length = 0;
    dyn_arr->capacity = 1000;
    dyn_arr->buffer = malloc(sizeof(int) * dyn_arr->capacity);
    if (!dyn_arr->buffer) {
        fprintf(stderr, "dynamic_array_init: memory allocation error\n");
        exit(1);
    }
}

void dynamic_array_del(Dynosaur* dyn_arr)
{
    free(dyn_arr->buffer);
}

void dynamic_array_push_back(Dynosaur* dyn_arr, int val)
{
    if(dyn_arr->capacity == dyn_arr->length) {
        dynamic_array_grow(dyn_arr);
    }
    dyn_arr->buffer[dyn_arr->length++] = val;
}

void dynamic_array_grow(Dynosaur* dyn_arr)
{
    dyn_arr->capacity *=2;
    int* new_buffer = malloc(sizeof(int) *dyn_arr->capacity);
    memcpy(new_buffer, dyn_arr->buffer, dyn_arr->length * sizeof(int));
    free(dyn_arr->buffer); //Why we aren't using dynamic_array_del???
    dyn_arr->buffer = new_buffer;
    if(!dyn_arr->buffer) {
        fprintf(stderr, "dynammic_array_grow(): memory allocation error\n");
        exit(1);
    }
}

void dynamic_array_print (Dynosaur* dyn_arr)
{
    printf("[");
    for (int i = 0; i < dyn_arr->length; ++i) {
        printf("%i, ",dyn_arr->buffer[i]);
    }
    printf("\b\b]\n");
}
