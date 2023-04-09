#include "main.h"
#include <stdio.h>
/**
 * get_bit - return value of bit on index
 * @n: number to get bit from
 * @index: index of the bit to retrieve
 * Return: value of bit index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	unsigned long int mask = 1ul << index;
	unsigned long int bit = (n & mask) >> index;

	return ((int) bit);
}
