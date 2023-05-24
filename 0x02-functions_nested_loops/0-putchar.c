#include <stdio.h>
/**
 * main - Write a program that prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char save[10] = "_putchar";
	int i;

	for (i = 0; save[i] != '\0'; i++)
	{
		putchar (save[i]);
	}
	putchar ('\n');
	return (0);
}
