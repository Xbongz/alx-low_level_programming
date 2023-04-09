#include "main.h"
/**
 * binary_to_uit - convert a binary to unsigned interger
 * @b: convert the binary string
 *
 * Return: unsigned intetger
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
		num = num << 1;
		if (b[i] == '1')
			num = num | 1;
		i++;
	}
	else
	{
		return (0);
	}
}
return (num);
}
