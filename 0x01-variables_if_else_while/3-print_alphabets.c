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
for (cha = 'A'; cha <= 'Z'; cha++)
{
putchar(cha);
}
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
