#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: first int
 * @b: second int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
