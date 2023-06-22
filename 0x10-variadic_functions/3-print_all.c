#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: number of arguments.
 * Return: arguments.
 */
void print_all(const char * const format, ...)
{
	int len = strlen(format);
	unsigned int i, n;
	va_list args;

	if (format != NULL)
	{
	va_start(args, format);

	for (i = 0; i < len i++)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), n++;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), n++;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), n++;
			break;
		case 's':
			str = va_arg(args, char *), n++;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		i++;
		if (i < len - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
	}
}
