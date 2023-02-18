#include <stdio.h>
#include <unistd.h>
/**
 * main - Write a program that prints the alphabet in lowercase and uppercase.
 * Return:0 (Success)
 */
int main(void)
{
int ch;
int cha;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (cha = 'A'; cha <= 'Z'; cha++)
{
putchar(cha);
}
putchar('\n');
return (0);
}
