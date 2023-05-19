#include <stdio.h>
/**
 * main -  print all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nom1;
	int nom2;

	for (nom1 = 0; nom1 <= 9; nom1++)
	{
		for (nom2 = 0; nom2 <= 9; nom2++)
		{
			putchar(nom1 + '0');
			putchar(nom2 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
