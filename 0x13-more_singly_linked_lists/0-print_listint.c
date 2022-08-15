#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - print all elements of a listint_t list
 * @h: pointer of a list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ir = h;
	size_t count = 0;

	while (ir != NULL)
	{
		printf("%d\n", ir->n);
		count += 1;
		ir = ir->next;
	}

	return (count);
}
