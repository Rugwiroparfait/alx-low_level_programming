#include <lists.h>
#include <stdio.h>

/**
 * print_listint - Prints all elements of listint_t list.
 * @h: Pointer to the header of the list
 * Return : the number of node of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
