#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Fuction pointer */
void print_name(char *name, void (*f)(char *));

/* Let's get through some stuff */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
