#include <string.h>
#include "printf.h"
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	int len = strlen(format);
	int i = 0, count = 0;
	char *str;
	va_list my_args;
	va_start(my_args, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] != '%')
		{
			printf("%c", format[i]);
			count++;
		}
		else
		{
			++i;
			switch (format[i])
			{
		case 'c':
			printf("%c", va_arg(my_args, int));
			count++;
			break;
		case 'i':
			printf("%d", va_arg(my_args, int));
			count++;
			break;
		case 'd':
			printf("%i", va_arg(my_args, int));
			count++;
			break;
		case 'f':
			printf("%f", va_arg(my_args, double));
			count++;
			break;
		case 's':
			str = va_arg(my_args, char*);
			if (str == NULL)
			{
				printf("nil");
			}
			printf("%s", str);
			count += strlen(str);
			break;
		case 'b':
			print_binary(va_arg(my_args, int));
			count++;
			break;
		case 'u':
			printf("%u", va_arg(my_args, unsigned int));
			count++;
			break;
		case 'o':
			printf("%o", va_arg(my_args, int));
			count++;
			break;
		case 'x':
			printf("%x", va_arg(my_args, int));
			count++;
			break;
		case 'X':
			printf("%X", va_arg(my_args, int));
			count++;
			break;
		case '%':
			printf("%%");
			count++;
			break;
		case 'r':
			str = rev_string(va_arg(my_args, char*));
			count += strlen(str);
			break;
		default:
		continue;
			}
		if (i < len - 1)
		{
			printf(", ");
			count+=2;
		}
	}
	}
	printf("\n");
	va_end(my_args);
	return (count);
}
void print_binary(int num)
{
	int remainder[32];
	int store;
	int i, j;

	if (num == 0)
	{
		printf("0");
	}
	else
	{
		while(num != 0)
		{
			remainder[i] = num % 2;
			store = num / 2;
			num = store;
			i++;
		}
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", remainder[j]);
	}
}
char* rev_string(char *s)
{
	int i;
	int tmp;
	int len = strlen(s);

	for (i = 0; i <= len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
	return (s);
}



int main(void)
{
	int len = 32;
	unsigned int ui = 2147484671;
	int count = _printf("before%ce,%iand%safter", 'B', 3, "stSchool");
    _printf("%b", 98);
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len = _printf("Let's try to printf a simple sentence.\n");
    printf("Total characters printed: %d\n", count);
    len = _printf("Percent:[%%]\n");
    _printf("String:[%r]\n", "I am a string !");
    return 0;
}
