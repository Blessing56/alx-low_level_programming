#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the listr
 * @idx: the index of the list where the new node should be added. Index starts at 0
 * @n: data to be inserted  in the node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/**
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (!*h)
		*h = temp = new;
	
	while (count < idx && temp)
	{
		temp = temp->next;
		count++;
	}

	new->next = temp;
	temp->prev = new->prev;
	temp->prev = new;
	temp = new->prev;
	temp->next = new;*/

	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
