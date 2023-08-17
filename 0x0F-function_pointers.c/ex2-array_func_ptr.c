#include <stdio.h>

/**
 * addition - function to add
 * @a: param
 * @b: param
 * Return: void.
 */
void add(int a, int b)
{
	printf("Addition is %d\n", a + b);
}


/**
 * subtract - function to subtract
 * @a: param
 * @b: param
 * Return: void.
 */
void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a - b);
}


/**
 * multiply - function to multiply
 * @a: param
 * @b: param
 * Return: void.
 */
void multiply(int a, int b)
{
	printf("Multiplication is %d\n", a * b);
}

/**
 * main - testing the function pointer codes
 *
 *
 * Return: 0.
 */
int main(void)
{
	/* fun_ptr_arr is an array of function pointers */
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};

	unsigned int ch, a = 15, b = 7;

	printf("Enter choice: 0 of add, 1 for subtract, and 2 for"
			" multiply \n");

	scanf("%d", &ch);
	
	if (ch > 2) return 0;
	
	(*fun_ptr_arr[ch])(a, b);

	return (0);
}
