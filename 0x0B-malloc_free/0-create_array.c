#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it witha a specific char
 * @size: size of array
 * @c: character to initialize with
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size <= 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	a[i] = '\0';

	return (a);
}
