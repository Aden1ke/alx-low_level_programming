#include "main.h"
/**
 * print_binary - function that converts a decimal to binary number.
 * @n: number to convert
 * Return: converted number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 0x8000000000000000;
	int leading_zeros = 1;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < 64; i++)
	{
		if ((n & mask) == 0)
		{
			if (!leading_zeros)
				_putchar('0');
		}
		else
		{
			leading_zeros = 0;
			_putchar('1');
		}
		mask >>= 1;
	}
}
