#include <stdio.h>

/**
 * fun - a normal function
 *
 * @a: an int parameter
 *
 * Return: void.
 */
void fun(int a)
{
	printf("The value of a is %d\n", a);
}


/**
 * main - testing the function pointer codes
 *
 *
 * Return: 0.
 */
int main(void)
{
	/* fun_ptr is a pointer to a function */
	void (*fun_ptr)(int)  = &fun;

	/**
	 * the line above can also be written as
	 * void (*fun_ptr)(int);
	 * fun_ptr = &fun;
	 */

	/* Let's print the address of fun */
	printf(" the address of the fun function is %p\n", *fun_ptr);

	/* Let's invoke the function */
	(*fun_ptr)(10);


}
