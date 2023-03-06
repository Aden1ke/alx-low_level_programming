#include "main.h"
/**
 * print_chessboard - function declaration
 * @a: pointer array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int j;
int i;
for (j = 0; j < 8; j++)
{
for (i = 0; i < 8; i++)
{
_putchar(a[j][i]);
}
_putchar('\n');
}
}
