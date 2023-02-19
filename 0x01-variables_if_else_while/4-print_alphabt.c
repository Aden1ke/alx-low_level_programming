#include <stdio.h>
#include <unistd.h>
/**
 * main - Write a program that prints the alphabet in lowercas, except q and e.
 * Return:0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
else
{
}
}
putchar('\n');
return (0);
}
