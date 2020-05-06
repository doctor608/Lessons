#ifndef DYNOSAUR_H
#define DYNOSAUR_H

typedef struct {
    int length;
    int capacity;
    int* buffer;
} Dynosaur;

void dynamic_array_init(Dynosaur* dyn_arr);
void dynamic_array_del(Dynosaur* dyn_arr);
void dynamic_array_push_back(Dynosaur* dyn_arr, int val);
void dynamic_array_print(Dynosaur* dyn_arr);
void dynamic_array_grow(Dynosaur* dyn_arr);

#endif DYNOSAUR_H