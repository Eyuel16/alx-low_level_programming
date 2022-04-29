#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of argumets used
 * @argv: an array containig the arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
