#include "function_pointers.h"

/**
 * array_iterator - executes a funct on array member
 * @array: array
 * @size: of the array
 * @action: funct
 * Return: nothing to return here
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for ( ; i < size; i++)
			action(array[i]);
	}
}
