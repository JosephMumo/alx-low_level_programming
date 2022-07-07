#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers \n
 * @separator: stringmto print between numbers
 * @n: int passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg_ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(arg_ptr, n);
	while (i < n)
	{
		if (i != 0 && separator)
			printf("%s", separator);
		printf("%d", (int)va_arg(arg_ptr, int));
		i++;
	}
	va_end(arg_ptr);
	printf("\n");
}
