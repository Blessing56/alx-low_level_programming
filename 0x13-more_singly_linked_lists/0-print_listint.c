#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numNodes++;
	}
	return (numNodes);
}
