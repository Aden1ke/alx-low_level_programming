#include "main.h"
/**
 * more_numbers- Checks for digits character.
 * Return: the numbers 0 to 9
 */
void more_numbers(void)
{
int x;
int q;
for (q = 0; q <= 10; q++)
{
for (x = 0; x <= 14; x++)
{
_putchar(x + '0');
}
_putchar(q + '0');
}
_putchar('\n');
}
