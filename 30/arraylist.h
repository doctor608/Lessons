#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <stdbool.h>
#include <stddef.h>

typedef struct {
    int size;
    int capacity;
    int* buffer_ptr;
} ArrayList;

static void arraylist_check_index(ArrayList* al, int pos);

void arraylist_init(ArrayList* al, size_t capacity);
void arraylist_del(ArrayList* al);

int arraylist_size(const ArrayList* al);
int arraylist_capacity(const ArrayList* al);

int arraylist_get(const ArrayList* al, size_t pos);
void arraylist_set(ArrayList* al, size_t pos, int val);

bool arraylist_empty(const ArrayList* al);

void arraylist_push_back(ArrayList* al, int val);
int arraylist_pop_back(ArrayList* al);

void arraylist_sort(ArrayList* al);

#endif /* ARRAY_LIST_H */