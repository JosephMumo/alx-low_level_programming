#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memcpy - copy mem area
 *@dest: dest to copy
 *@src: source ptr
 *@n: number of bytes to copy
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * *_realloc - reallocate a mem using malloc and free
 *@ptr: ptr to realloc
 *@old_size: old size of the mem
 *@new_size: new size of the mem
 *Return: pointer reallocared or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *rp;
	unsigned int i;

	if (ptr == NULL)
	{
		rp = malloc(new_size);
		if (rp == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (rp);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	rp = malloc(new_size);

	if (rp == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		_memcpy(rp, ptr, old_size);
	free(ptr);

	return (rp);
}
