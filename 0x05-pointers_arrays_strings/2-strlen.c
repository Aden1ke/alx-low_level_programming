#include "main.h"
#include <stddef.h>
/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(const char *s)
{
size_t length = 0;
while (*s++)
length++;
return (length);
}
