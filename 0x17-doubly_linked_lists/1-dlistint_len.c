#include "lists.h"

/**
 * dlistint_len - returns the number of elements in the list
 *
 * @h: head of the list
 *
 * Return: returns the number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}

	return (count);
}
