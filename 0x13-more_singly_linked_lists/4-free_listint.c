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
	listint_t *next;
	listint_t *ptr = (listint_t *)malloc(sizeof(int));

	ptr = head;
	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	head = NULL;
}
