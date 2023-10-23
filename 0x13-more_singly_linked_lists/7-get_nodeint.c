#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linled list
 * @head: a pointer that address the head
 * @index: a pointer of the node
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
