#include "lists.h"

/**
 * free_listint2 - frees a listint_t lists
 * @head: pointer to pointer to head
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p;


	if (!head)
		return;

	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
}
