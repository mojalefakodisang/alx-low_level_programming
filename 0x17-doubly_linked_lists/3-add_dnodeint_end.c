#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 *
 * @head: first element of the list
 * @n: data to be added on the list
 *
 * Return: returns the address of the new element else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t  **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	last = (*head);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
