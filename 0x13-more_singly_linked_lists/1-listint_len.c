#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked listint_t list
 *
 * @h: head
 *
 * Return: returns number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
