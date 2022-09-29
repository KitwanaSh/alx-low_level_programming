#include "lists.h"

/**
 *  sum_dlistint - returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 *
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sumation = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sumation += i->n;
	}

	return (sumation);
}
