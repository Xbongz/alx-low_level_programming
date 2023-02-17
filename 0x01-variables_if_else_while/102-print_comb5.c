#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i,j;

	for (i = 0; i < 100; j++)
	{
		if (i < j)
		{
			putchar((i / 10) + 48);
			putchar((i / 10) + 48);
			putchar(i);
			putchar((j / '%' 10) + 48);
			if (i != 98 || j != 99)
			{
				putchar(i);
				putchar(j);
			}
		}
	}
}
putchar('\n');
return (0);

}

