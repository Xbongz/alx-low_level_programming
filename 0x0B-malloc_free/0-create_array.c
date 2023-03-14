#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *n;

	if (size == 0)
		return (NULL);
	n = malloc(size * sizeof(char));
	if (n == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		n[j] = c;
	}
	return (n);
}
