#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 *
 * @head: first node of the list
 *
 * Return: returns 1 on success else 0
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
