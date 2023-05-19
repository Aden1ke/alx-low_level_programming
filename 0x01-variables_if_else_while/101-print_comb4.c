#include <stdio.h>
/**
 * main -  print all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nom1;
	int nom2;
	int nom3;

	for (nom1 = 0; nom1 <= 9; nom1++)
	{
		for (nom2 = 0; nom2 <= 9; nom2++)
		{
			for (nom3 = 0; nom3 <= 9; nom3++)
			{
				if (nom1 < nom2 && nom2 < nom3)
				{
					putchar(nom1 + '0');
					putchar(nom2 + '0');
					putchar(nom3 + '0');
					if (nom1 != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
