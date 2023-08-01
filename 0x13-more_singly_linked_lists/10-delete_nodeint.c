#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specified index
 *
 * @head: starting node
 * @index: index of node to be deleted
 *
 * Return: returns 1 on success else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	listint_t *prev;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	prev = NULL;
	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	prev->next = current->next;
	free(current);

	return (1);
}
