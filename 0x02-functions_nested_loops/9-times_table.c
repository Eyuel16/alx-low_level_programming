#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: null
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_product = i * j;
			if ((product / 10) == 0)
				_putchar(product % 10 + '0');
			if ((product / 10) != 0)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		putchar('\n');
	}
	return (0);
}
