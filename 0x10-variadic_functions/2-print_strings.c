#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between numbers.
 * @n: number of arguments.
 * Return: arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator != NULL)
	{
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char*);

		if (x == NULL)
		{
			printf("nil");
		}
		else
			printf("%s", x);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
	}
}
