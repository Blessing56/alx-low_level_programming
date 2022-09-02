#include "lists.h"

/**
 * dlistint_len - prints the number of elements in a linked list
 * @h: head pointer
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
