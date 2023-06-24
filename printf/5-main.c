#include "printf.h"
#include <stdio.h>
#include "printf.c"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
     printf("%b\n", 98);
    return (0);
}
