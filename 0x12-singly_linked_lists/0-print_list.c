#include "lists.h"

/**
 * print_list - prints all element of list_t list
 * @h: pointer of the list
 *
 * Return: pointer of the list
 */
size_t print_list(const list_t *h)
{
	const list_t *prd = h;

	size_t num_of_nodes = 0;

	while (prd != NULL)
	{
		if (prd->str != NULL)
			printf("[%d] %s\n", prd->len, prd->str);
		else
			printf("[0] (nil)\n");
		num_of_nodes = num_of_nodes + 1;
		prd = prd->next;
	}

	return (num_of_nodes);
}
