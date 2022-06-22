#include "main.h"

/**
 * _strlen_recursion -size
 * @s: pointer to string
 * Return: int value
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palidrome
 * @s: pointer to str
 * @l: position
 * Return: int value
 */
int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palidrome - palidrome
 * @s: pointer to string
 * Return: int value
 */
int is_palidrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
