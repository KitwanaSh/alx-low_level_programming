#include "lists.h"

/**
 * list_len - print number of elements in list
 * @h: pointer to list
 *
 * Return: Number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t things = 0;

	while (h)
	{
		things++;
		h = h->next;
	}
	return (things);
}
