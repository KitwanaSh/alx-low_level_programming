#include "lists.h"

/**
 * dlistint_len - returns the number of elements in the variable.
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;

	if (h == NULL)
		return (cnt);

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
