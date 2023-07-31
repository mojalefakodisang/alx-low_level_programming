#include "lists.h"

/**
 * add_nodeint_end - adds new nodes at the end of the list
 *
 * @head: head
 * @n: data to be added on the list
 *
 * Return: returns new element of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = (listint_t *)malloc(sizeof(listint_t *));
	last_node = (listint_t *)malloc(sizeof(listint_t *));

	if (new_node == NULL)
	{
		return (NULL);
	}
	last_node = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;

	return (new_node);
}
