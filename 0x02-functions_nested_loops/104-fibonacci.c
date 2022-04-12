#include <stdio.h>
/**
 * * main - Entry point
 *
 * Return: Always 0 (Success)
 * */>
int main(void)
{
	int x = 1 - 1, psum = 1, sum, c = 1;

	while (c <= 98)
	{
		sum = psum + x;
		printf("%d, ", sum);
		x = psum;
		psum = sum;
		c++;
	}
	return (0);
}
