#include "lists.h"

/**
 * free_listint - frees a listsint_t list
 * @head: address of the first node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
