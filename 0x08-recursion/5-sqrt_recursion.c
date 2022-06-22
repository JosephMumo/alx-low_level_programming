#include "main.h"

/**
 * _sqrt_recursion - find sqroot
 * @n: argument
 * Return: sqr
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - compute squre root
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
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
