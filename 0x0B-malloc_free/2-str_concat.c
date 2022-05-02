# include "main.h"
# include <stdlib.h>

/**
 *str_concat - concat 2 strings.
 *@s1: first string.
 *@s2: second string.
 *Return: pointer to string.
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	i = 0;
	for (k = 0; s1[i] != '\0'; i++, k++)
		s[k] = s1[i];

	j = 0;
	for (k = i; s2[j] != '\0'; j++, k++)
		s[k] = s2[j];

	s[k] = '\0';

	return (s);
}
