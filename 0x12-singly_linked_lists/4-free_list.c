#include "lists.h"

/**
 * free_list - free the list
 * @head: pointer to the first element
 *
 * Return: explaination using valdrind
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
