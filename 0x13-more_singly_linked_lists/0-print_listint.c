#include "lists.h"

/**
 *print_listint - returns the number of elements in
 *@h: head of a list.
 *
 *Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
