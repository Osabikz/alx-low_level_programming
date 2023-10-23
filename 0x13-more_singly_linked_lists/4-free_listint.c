#include "lists.h"

/**
 * free_lsitint - function that frees a list
 * @head: a pointer of a node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
