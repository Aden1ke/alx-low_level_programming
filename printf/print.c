#include <string.h>
#include "printf.h"
#include <stdlib.h>
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
                case 'r':
                     str = strdup(va_arg(my_args, char*));
                    if (str != NULL)
                    {
                        rev_string(str);
			printf("%s", str);
                        count += strlen(str);
                    }
                    free(str);
		    break;
			  default:
                    continue;
            }
            if (i < len - 1)
            {
                printf(", ");
                count += 2;
            }
        }
    }
    printf("\n");
    va_end(my_args);
    return count;
}

char* rev_string(char *s)
{
	int i, tmp;
	int len;
    if (s == NULL)
    {
        return NULL;
    }
    len = strlen(s);

    for (i = 0; i <= len / 2; i++)
    {
        tmp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = tmp;
    }
    return s;
}

int main(void)
{
    _printf("String:[%r]\n", "I am a string !");
    return 0;
}

