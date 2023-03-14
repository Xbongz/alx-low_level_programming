#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *n;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	n = malloc(k * sizeof(char));
	if (n == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		n[l] = s1[l];
	for (l = 0; l < j; l++)
		n[l + i] = s2[l];
	n[i + j] = '\0';
	return (n);
}
