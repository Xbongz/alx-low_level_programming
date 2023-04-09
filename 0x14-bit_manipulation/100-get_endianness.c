#include <stdio.h>
#include <stdint.h>
/**
 * get_endianness - checks it has big or little endian
 * Return: 0 for big , 1 for liftle
 */
int get_endianness(void)
{
	uint32_t i = 0x01020304;
	uint8_t *c = (uint8_t *) &i;

	if (*c == 0x04)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
