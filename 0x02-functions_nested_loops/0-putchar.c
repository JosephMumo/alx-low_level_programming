#include <main.h>

/**
 * _putchar - prints characters c to stdout
 * @: The characters to be printed
 *
 * Return: 1 if executed successfully
 * On error, -1 if error is present
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
