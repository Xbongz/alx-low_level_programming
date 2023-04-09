#include <stdio.h>
/**
 * get_bit - return value of bit on index
 * @n: number to get bit from
 * @index: index of the bit to retrieve
 *
 * Return: value of bit at index or -1 for error if eeror occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
	{
		return (-1);
	}
	bit_value = (n >> index & 1);
	return (bit_value);
}
