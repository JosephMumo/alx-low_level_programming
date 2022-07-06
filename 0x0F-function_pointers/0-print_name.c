#include "function_pointers.h"

/**
 * print_name -prints the name
 * @name: name string
 * @f: function pointer
 * Return: nothing to return here
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
