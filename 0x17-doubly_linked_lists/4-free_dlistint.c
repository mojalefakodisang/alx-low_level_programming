#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: first node of the list
 *
 * Return: no return value
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
