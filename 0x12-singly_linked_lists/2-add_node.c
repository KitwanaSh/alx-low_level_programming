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
list_t *add_node(list_t **head, const char *str)
{
	char *dupl;
	int len;
	list_t *new_elmnt;

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
	new_elmnt->next = *head;

	*head = new_elmnt;

	return (new_elmnt);
}
