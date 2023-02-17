#include <stdio.h>

/**
 * main - prints all base single digits numbers
 * 10 starting from 0, followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
