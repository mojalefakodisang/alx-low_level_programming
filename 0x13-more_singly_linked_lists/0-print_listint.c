#include "lists.h"
/**
 * print_listint - prints all the elements of the listint_t list
 *
 * @h: head
 *
 * Return: returns the number of elements
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
