#include "main.h"

/**
 * _pow_recursion - prints the power
 * @x: argument
 * @y: argument
 * Return: -1 if y is less than 0 otherwise the value of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 1)
	{
		return (x * _pow_recursion(x, y - 1));
	else
	{
		return (1);
	}
}