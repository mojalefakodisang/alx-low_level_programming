#include "lists.h"

/**
 * print_listint_safe - prints linked list
 *
 * @head: first node of the list
 *
 * Return: returns count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, new_count;
	const listint_t *current = head;
	const listint_t *temp = NULL;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
		temp = head;
		new_count = 0;
		while (new_count < count)
		{
			if (current == temp)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			temp = temp->next;
			new_count++;
		}

		if (!head)
		{
			exit(98);
		}
	}
	return (count);
}
