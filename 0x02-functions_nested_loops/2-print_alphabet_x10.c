#include "main.h"
/**
 * main - Write a function that prints 10 times the alphabet.
 * Return:0 (success)
 */
void print_alphabet_x10(void)
{
char c;
int a;
for (a = 1; a <= 10; a++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
