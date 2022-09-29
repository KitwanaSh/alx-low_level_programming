#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning.
 * @head: double pointer to the head of the list
 * @n: data to be added
 *
 * Return: The address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;
	n_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = n_node;
	*head = n_node;
	return (n_node);
}
