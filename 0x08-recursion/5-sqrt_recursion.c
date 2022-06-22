#include "main.h"

/**
 * _sqrt_recursion - find sqroot
 * @n: argument
 * Return: sqr
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - compute squre root
 * @n: param
 * @val: sqroot
 * Return: an integer value
 */
int sqr(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (sqr(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
