#include <stdio.h>
#include "main.h"
/**
 * _islower - tests c if lower or upper
 * @c: character is passed as integer
 * Description: c is the arguement as integer
 * Return: void
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
