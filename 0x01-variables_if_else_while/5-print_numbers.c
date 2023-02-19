#include <stdio.h>
#include <unistd.h>
/**
 * main - Write a that prints all single digit numbers of base 10 from 0.
 * Return:0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num, '\n');
}
return (0);
}
