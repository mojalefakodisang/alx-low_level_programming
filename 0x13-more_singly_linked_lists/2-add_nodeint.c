#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of the list
 *
 * @head: head of the list
 * @n: data to be added on the list
 *
 * Return: returns the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
