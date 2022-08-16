#include "lists.h"

/**
 * add_nodeint_end - adds nodes at the add
 * @head: pointer to pointer of head
 * @n: constant integer
 *
 * Return: the address of last element
 * or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int len;
	listint_t *new_element, *last_element;

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
		return (NULL);
	for (len = 0; len < n;)
		len++;
	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
		*head = new_element;
	else
	{
		last_element = *head;
		while (last_element->next != NULL)
			last_element = last_element->next;
		last_element->next = new_element;
	}

	return (*head);
}
