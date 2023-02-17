#include <stdio.h>

/**
 * main - prints all possible single digit numbers,
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(n);
			putchar('\n');
		}
	}
	putchar('\n');
	return (0);
}
