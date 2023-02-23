#include "main.h"
/**
 * print_line - prints a line
 *
 * @j: integer to print stuff?
 */
void print_line(int j)
{
	int i;

	for (i = 0; i < j; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
