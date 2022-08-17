#include "lists.h"

/**
 * pop_listint - deletes the head of node in a listint_t list
 * @head: double pointer of of head.
 *
 * Return: the head's node data
 */
int pop_listint(listint_t **head)
{
	listint_t *del;
	int el;

	if (!head  || !(*head))
		return (0);
	del = (*head)->next;
	el = (*head)->n;
	free(*head);

	*head = (del);

	return (el);
}
