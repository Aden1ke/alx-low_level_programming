#include "main.h"
/**
 * _strlen - function definition
 * Description: checks string length
 * @s: the string pointer
 * Return: index
 */
int _strlen(char *s)
{
int index;
for (index = 0; s[index] != '\0'; index++)
{}
return (index);
}
