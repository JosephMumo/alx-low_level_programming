#include "variadic_functions.h"

/**
 * sum_them_all - computes sum of its parameters
 * @n: number of param
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_ptr;
	int nplus, sum = 0;
	unsigned int args = 0;

	va_start(args_ptr, n);
	if (n == 0)
		return (0);
	while (args < n)
	{
		nplus = va_arg(args_ptr, int);
		sum = sum + nplus;
		args++;
	}
	va_end(args_ptr);
	return (sum);
}
