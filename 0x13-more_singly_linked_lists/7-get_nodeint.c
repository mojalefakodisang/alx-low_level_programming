#include "lists.h"

/**
 * get_nodeint_at_index - prints out the data of a given index
 *
 * @head: starting node
 * @index: index
 *
 * Return: returns the data of given index of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	current = head;
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	return (current);
}
