#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer of a the first node element
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	if (!head || !(*head))
		return (0);

	prev = (*head)->next;
	(*head)->next = NULL;

	while (prev)
	{
		curr = *head;
		*head = prev;

		prev = (*head)->next;

		(*head)->next = curr;
	}
	return (*head);
}

