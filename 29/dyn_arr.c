#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <time.h>

typedef struct {
    int length;
    int capacity;
    int* buffer;
} DynamicArray;

void dynamic_array_init(DynamicArray* dyn_arr);
void dynamic_array_del(DynamicArray* dyn_arr);
void dynamic_array_push_back(DynamicArray* dyn_arr, int val);
// int  dynamic_array_pop_back(DynamicArray* dyn_arr);
void dynamic_array_print(DynamicArray* dyn_arr);
static void dynamic_array_grow(DynamicArray* dyn_arr);

void dynamic_array_init(DynamicArray* dyn_arr)
{
    dyn_arr->length = 0;
    dyn_arr->capacity = 4;
    dyn_arr->buffer = malloc(sizeof(int) * dyn_arr->capacity);
    if (!dyn_arr->buffer) {
        fprintf(stderr, "dynamic_array_init: memory allocation error\n");
        exit(1);
    }
}

void dynamic_array_del(DynamicArray* dyn_arr)
{
    free(dyn_arr->buffer);
}

void dynamic_array_push_back(DynamicArray* dyn_arr, int val)
{
    if (dyn_arr->capacity == dyn_arr->length) {
        dynamic_array_grow(dyn_arr);
    }

    dyn_arr->buffer[dyn_arr->length++] = val;
}

static void dynamic_array_grow(DynamicArray* dyn_arr)
{
    dyn_arr->capacity *= 2;
    int* new_buffer = malloc(sizeof(int) * dyn_arr->capacity);
    memcpy(new_buffer, dyn_arr->buffer, dyn_arr->length * sizeof(int));
    free(dyn_arr->buffer);
    dyn_arr->buffer = new_buffer;
    if (!dyn_arr->buffer) {
        fprintf(stderr, "dynamic_array_grow(): memory allocation error\n");
        exit(1);
    }
}

void dynamic_array_repr(DynamicArray* dyn_arr)
{
    printf("DynamicArray(length = %d, capacity = %d)\n", dyn_arr->length, dyn_arr->capacity);
}

void dynamic_array_print(DynamicArray* dyn_arr)
{
    printf("[");
    for (int i = 0; i < dyn_arr->length; ++i) {
        printf("%i, ", dyn_arr->buffer[i]);
    }
    printf("\b\b]\n");
}

int main(void)
{
    DynamicArray dyn_arr;
    dynamic_array_init(&dyn_arr);

    srand(time(NULL)); 

    for (int i = 0; i < 500000; ++i)
        dynamic_array_push_back(&dyn_arr, rand() % 100000000);


    dynamic_array_print(&dyn_arr);

    dynamic_array_del(&dyn_arr);
    return 0;
}