#include "lists.h"

/**
 * sum_dlistint - adds the integers of the list
 *
 * @head: head of the list
 *
 * Return: returns the sum of the node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
