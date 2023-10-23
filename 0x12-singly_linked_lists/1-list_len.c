#include "lists.h"

/**
 * list_len - length of the list
 * @h: pointer of the node
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
	return (0);

	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}