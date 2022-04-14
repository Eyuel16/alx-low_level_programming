#include "main.h"

/**
 * print_number - print a number using _putchar() only
 *
 * Return: Always 0
 */ 

void printnumber(int n)
{

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n == 0)
        _putchar('0');

    if (n/10)
        printnumber(n / 10);

    _putchar(n % 10 + '0');
}
