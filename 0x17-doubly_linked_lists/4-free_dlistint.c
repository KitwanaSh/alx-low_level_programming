#include "lists.h"

/**
 * free_dlistint - frees the variable.
 * @head: pointer to the head of the list.
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
