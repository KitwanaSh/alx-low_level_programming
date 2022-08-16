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

	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			p = *head;
			free(p);
			*head = (*head)->next;
		}
		*temp = NULL;
	}
}
