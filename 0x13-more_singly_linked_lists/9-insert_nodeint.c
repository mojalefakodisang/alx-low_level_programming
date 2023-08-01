#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given point
 *
 * @head: starting node of the list
 * @idx: index of where the data is to be inserted
 * @n: data to be inserted
 *
 * Return: returns the added data on the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (new_node->n == '\0')
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	current = *head;
	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (*head);
}
