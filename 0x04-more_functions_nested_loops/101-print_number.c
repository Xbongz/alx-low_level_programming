#include "main.h"

/**
 * print_number - prints number
 *
 * @n: integer to print to character
 */
void print_number(int n)
{
	int i;
	int j = 1;
	unsigned int x = n;
	unsigned int y = n;
	int k = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = n + 1;
		n = -n;
		y = n;
		x = n;
		x += 1;
		y += 1;
	}

	while (x != 0)
	{
		x = x / 10;
		k++;
	}
	for (i = 1; i < k; i++)
	{
		j *= 10;
	}
	for (i = 0; i < k; i++)
	{
		_putchar(y / j + '0');
		y = y % j;
		j = j / 10;
	}
}
