#include "main.h"
/**
 * _isdigit - function definition
 * Description: test if c is a digit
 * @c: the value to test
 * Return: 1-true, 0-false
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
