#include "lists.h"

/**
 * *add_nodeint - adds a node at the beginning of each
 * linked list listint_t list
 * @head: pointer to pointer of head
 * @n: const integer
 * Return:  the address of new elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int len;
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
		return (NULL);
	for (len = 0; len < n;)
		len++;
	new_element->n = n;
	new_element->next = *head;

	*head = new_element;

	return (new_element);
}
