#include "lists.h"

/**
 * free_listint - frees memory of the list
 *
 * @head: head
 *
 * Return: no return value
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		free(head);
		head = ptr->next;
	}
}
