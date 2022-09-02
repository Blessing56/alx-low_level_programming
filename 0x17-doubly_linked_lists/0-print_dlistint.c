#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;

	while (temp) /*is the same as temp != 0*/
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
