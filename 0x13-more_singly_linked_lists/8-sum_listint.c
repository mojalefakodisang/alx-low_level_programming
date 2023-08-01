#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of the list
 *
 * @head: first node
 *
 * Return: returns sum of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
