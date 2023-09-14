#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a specific index
 *
 * @head: head of the list
 * @index: index at which node is searched
 *
 * Return: returns the node at index else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
