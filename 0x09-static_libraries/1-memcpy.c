#include "main.h"
/**
 * *_memcpy - function definition
 * @dest: the destination address
 * @src: the source address
 * @n: number of times to copy
 * Description: copies the src to dest n times
 * Return: copied string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
for (index = 0; index < n; index++)
{
dest[index] = src[index];
}
return (dest);
}
