#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary representing number.
 * @n: the number to convert to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		putchar('1');
	else
		putchar('0');
}
