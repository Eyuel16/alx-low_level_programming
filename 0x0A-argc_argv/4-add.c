#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: an array containing arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int i, j, sum;

	sum = 0;
	i = 1;
	j = 1;

	if (argc < 3)
	{
		printf("%d\n", 0);
	}

	for (argv[i]; i != argc; i++)
	{
		for (argv[i][j]; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += argv[i];
	}
	printf("%d\n", sum);
	return (0);
}
