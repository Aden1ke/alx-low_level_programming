#include "main.h"
#include <string.h>
/**
 * binary_to_uint - function that converts
 * a binary number to an unsigned int.
 * @b: number to convert
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		decimal_val = (decimal_val << 1) + (*b - '0');
		b++;
	}
	return (decimal_val);
}
