#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: head of the list
 * @index: index of the node, starting from 0
 *
 * Return: nth node of a linked list on success otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	while (count < index && temp)
	{
		temp = temp->next;
		count++;
	}
	if (!temp)
		return (NULL);
	return (temp);
}
