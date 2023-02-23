#include "main.h"
/**
 * more_numbers - prints the numbers
 *
 */
void more_numbers(void)
{
	int x;
	int h;

	for (h = 0; h <= 9; h++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
