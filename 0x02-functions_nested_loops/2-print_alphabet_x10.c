#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet.
 * void print_alphabet_x10(void)
 * Return: void
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
