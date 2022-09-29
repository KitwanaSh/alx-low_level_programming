#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node.
 * @head: double pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *now;
	unsigned int i;

	now = head;
	i = 0;
	while (now != NULL)
	{
		if (i == index)
			return (now);
		now = now->next;
		i++;
	}
	return (NULL);
}
