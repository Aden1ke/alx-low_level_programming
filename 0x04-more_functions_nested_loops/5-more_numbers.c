#include "main.h"
/**
 * more_numbers- Write a function that prints 10 times the 0 t0 14 digits.
 * Return: the numbers .
 */
void more_numbers(void)
{
int x, c;
for (x = 0; x <= 9; x++)
{
for (c = 0; c <= '14'; c++)
{
_putchar(c + '0');
}
_putchar(x);
}
_putchar('\n');
}
