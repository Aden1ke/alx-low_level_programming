#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include “main.h”

/**
 * intascii – integer to ascii format
 * @numb: number
 * @base: base of number
 *
 * return: (character)

 *
*/

char *intascii(long int numb, int base)
{
	char pos = 0;
	char *ptr;
	unsigned long i = numb;
	static char *hex = “0123456789abcdef”;
	static char buf[50];
	


	if (numb < 0)
	{
		i = -numb;
		pos = ‘-‘;
	}
	ptr = &buf[49];
	*ptr = ‘\0’;

	do      {
		*--ptr = hex[i % base];
		i /= base;
	} while (i != 0);

	if (pos)
		*--ptr = pos;
	return (ptr);
}
