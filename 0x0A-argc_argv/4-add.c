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
	j = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (argv[i] != '\0')
	{
		while (argv[i][j] != '\0')
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
