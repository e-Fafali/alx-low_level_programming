#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Let's add come libraries */
#include <stdlib.h>
#include <stddef.h>

/* Fuction pointer */
void print_name(char *name, void (*f)(char *));

/* Let's get through some stuff */
void array_iterator(int *array, size_t size, void (*action)(int));

/* let's compare stuff */
int int_index(int *array, int size, int (*cmp)(int));

#endif
