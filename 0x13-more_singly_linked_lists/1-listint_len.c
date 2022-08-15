#include "lists.h"

/**
 * listint_len - prints number of elements in the
 * listint_t linked list.
 * @h: pointer to list
 *
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
