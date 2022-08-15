#include "lists.h"

/**
 * listint_len - print number of elements
 * @h: pointer to list
 *
 * return: number of elements in linked list
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
