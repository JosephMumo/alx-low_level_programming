#include "lists.h"

/**
 * listint_len - number of elements in alinked list
 * @h: linked list
 * Return: total number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
