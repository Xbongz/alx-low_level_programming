#include "main.h"
/**
 * flip_bits - count number of bits to change
 * get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_gate_value = n ^ m;
	unsigned int count = 0;

	while (xor_gate_value != 0)
	{
		xor_gate_value &= (xor_gate_value - 1);
		count++;
	}
	return (count);
}
