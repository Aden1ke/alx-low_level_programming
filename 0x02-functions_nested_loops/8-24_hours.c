#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Write a function that prints
 * every minute of the day of Jack Bauer
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
