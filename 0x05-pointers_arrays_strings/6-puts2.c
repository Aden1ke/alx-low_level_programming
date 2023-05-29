#include "main.h"
#include <stdio.h>
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character.
 * @str: pointer to a string.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);

	}
	putchar('\n');
}
