#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int i = 2;
	unsigned long j = 612852475143;

	while (i != j)
	{
		if (j % i == 0)
		{
			j = j / i;
		} else
		{
			i++;
		}
	}
	printf("%lu\n", j);
	return (0);
}
