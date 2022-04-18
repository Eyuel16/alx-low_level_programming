#include "main.h"
/**
 * swap_int - swaps the value of the variables.
 * @a: is pointer parameter.
 * @b: is pointer parameter.
 * Return: void.
 */
void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
