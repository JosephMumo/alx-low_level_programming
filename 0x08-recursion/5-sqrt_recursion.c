#include "main.h"

/**
 * _sqrt_recursion - find sqroot
 * @n: argument
 * Return: sqr
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - compute squre root
 * @n: param
 * @i: sqroot
 * Return: an integer value
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
