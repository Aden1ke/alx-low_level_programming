#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function definition
 * @str: a string pointer
 * Description: duplicates a string
 * Return: a string value
 */
char *_strdup(char *str)
{
char *new;
if (str == NULL)
{
return (NULL);
}
new = malloc(strlen(str) + 1);
if (new == NULL)
{
return (NULL);
}
strcpy(new, str);
return (new);
}
