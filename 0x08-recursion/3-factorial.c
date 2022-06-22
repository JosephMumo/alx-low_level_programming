#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: param
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1));
	}
}
