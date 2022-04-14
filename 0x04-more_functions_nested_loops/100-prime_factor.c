#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */

int main(void)
{
int number = 612852475143, large_factor = 0, i = 2;
while (number != 1)
{
if (number % i == 0)
{
while (number % i == 0)
{
number /= i;
}
large_factor = i;
}
i++;
}
printf("%d\n", large_factor);
return (0);
}
