#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - a function that reverses a string.
 *@s: pointer to a string.
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	int store;

	for (i = len / 2; i >= 0; i--)
	{
		store = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = store;
	}
}
