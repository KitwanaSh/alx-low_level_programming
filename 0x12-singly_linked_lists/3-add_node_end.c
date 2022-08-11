#include "lists.h"

/**
 * add_node - adds a new node at the beggining
 * of each node
 * @head: double pointer of list_t representing
 * the first elementin list
 * @str: string - (malloc'ed string)
 *
 * Return: The address of new element or  NULL
 * if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupl;
	int len;
	list_t *new_elmnt, *last_elmnt;

	new_elmnt = malloc(sizeof(list_t));

	if (new_elmnt == NULL)
		return (NULL);

	dupl = strdup(str);

	if (dupl == NULL)
	{
		free(new_elmnt);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new_elmnt->str = dupl;
	new_elmnt->len = len;
	new_elmnt->next = NULL;

	if (*head == NULL)
		*head = new_elmnt;
	else
	{
		last_elmnt = *head;
		while (last_elmnt->next != NULL)
			last_elmnt = last_elmnt->next;
		last_elmnt->next = new_elmnt;
	}

	return (*head);
}
