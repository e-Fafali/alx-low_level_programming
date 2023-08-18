#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


/* Putchar */
int _putchar(char c);

/* A varadic function that sums up stuff */
int sum_them_all(const unsigned int n, ...);

/* A varadic function that prints stuff with a separator */
void print_numbers(const char *separator, const unsigned int n, ...);

#endif
