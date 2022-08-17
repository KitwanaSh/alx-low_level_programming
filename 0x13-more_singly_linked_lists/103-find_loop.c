#include "lists.h"

/**
 * find_listint_loop -finds the index where a loop starts
 * @head: list head
 *
 * Return: pointer to where the loop is
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *v = head, *z = head;

	if (!head || !(head->next))
		return (NULL);
	while (z && v && z->next)
	{
		z = z->next;
		v = v->next->next;
		if (z == v)
			break;
	}
	if (z != v)
		return (NULL);
	z = v;

	while (z != v)
	{
		z = z->next;
		v = v->next;
	}
	return (z);
}
