#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at specific index
 *
 * @h: head of the list
 * @idx: index
 * @n: data of the node
 *
 * Return: returns the address of the new node else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	(tmp->next)->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
