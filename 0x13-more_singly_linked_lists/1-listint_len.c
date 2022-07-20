#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to head
 *
 * Return: number of elements/nodes
 */


size_t listint_len(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numNodes++;
	}
	return (numNodes);
}

