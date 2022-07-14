#include "lists.h"
/**
 * slen - returns str len
 * @str: the str given
 * Return: the len of 0
 */
int _slen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);
	while (*(str+ len) != '\0')
		len++;
	return (len);
}

/**
 * print_list - prints all list elements
 * @h: first member of list_t
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *cnode;
	size_t i = 0;
	int len;

	if (h == NULL)
		return (0);
	cnode = h;
	while (cnode != NULL)
	{
		len = (cnode->str) ? _slen(cnode->str) : 0;
		printf("[%d] %s\n", len, (cnode->str) ? cnode->str : "(nil)");
		cnode = cnode->next;
			i++;
	}

	return (i);
}
