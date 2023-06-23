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
	int i;
	va_list args;
	char *str;

	if (format != NULL)
	{
	va_start(args, format);

	for (i = 0; i < len; i++)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char*);
			if (str == NULL)
			{
				printf("nil");
			}
			printf("%s", str);
			break;
		default:
		continue;
		}
		if (i < len - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
	}
}
