#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include “main.h”

/**
 * printc – Return Character.
 * @sstri: string to return
 *
 * return: (length of sstri)
 */
int printc(char *sstri)
{
	int i;

	for (i = 0; sstri[i] != ‘\0’; ++i)
		_putchar(sstri[i]);

	return (i);
}


/**
 * _print_integer – Print a number(decimal and integer) in base 10
 * @numb: Number to print in base 10
 *
 * return: (Length of the numbers in decimal)
 **/
int _print_integer(va_list numb)
{
	char *buf;
	int lengt;

	buf = intascii(va_arg(numb, int), 10);

	lengt = printc((buf != NULL) ? buf : “NULL”);

	return (lengt);
}
