#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @n: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *n)
{
	int flag, i, j;

	flag = 0;
	j = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, len = 0, words, k = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (k + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}

	matrix[j] = NULL;

	return (matrix);
}
