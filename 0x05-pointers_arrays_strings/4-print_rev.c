#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int len = 0;
int k;
while (*s != '\0')
{
len++;
s++;
}
s--;
for (k = len; k >= 0; k--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
