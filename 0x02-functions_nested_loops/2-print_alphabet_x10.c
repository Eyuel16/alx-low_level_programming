#include "main.h"

/**
 * print_alphabet_x10 - prints all lowercase letter 10 times
 *
 * Return: null.
 */
void print_alphabet_x10(void)
{
	int check, j;

	for (check = 0; check < 10; check++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		check++;
	}
}
