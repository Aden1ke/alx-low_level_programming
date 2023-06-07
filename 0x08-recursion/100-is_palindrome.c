#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to a string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome -function to check if a string is a palindrome.
 * @s: Pointer to a string.
 * @start: Start index.
 * @end: End index.
 * Return: 1 if palindrome, 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - function that returns
 * 1 if a string is a palindrome and 0 if not.
 * @s: pointer to a string
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	return (check_palindrome(s, 0, length - 1));
}
