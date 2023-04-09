#include "main.h"
/**
 * get_endianness - checks it has big or little endian
 * Return: 0 for big , 1 for liftle
 */
int get_endianness(void)
{
	unsigned int i = 0;
	char *c = (char *) &i;

	return (*c);
}
