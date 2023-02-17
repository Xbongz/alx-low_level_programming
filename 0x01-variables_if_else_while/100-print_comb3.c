#include <stdio>

/**
 * main - print numbers from 00 to 99
 * Return: 0 (Succes)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 57 || m != 57)
			{
				putchar(n);
				putchar('\n');
			}
		}
	}
	putchar('\n');
	return (0);
}

