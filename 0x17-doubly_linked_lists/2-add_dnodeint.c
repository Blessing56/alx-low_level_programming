#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beggining of a list
 * @head: head pointer
 * @n: data in the node
 *
 * Return: address of the new element on success otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *new;


	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = temp = new;
	}
	else
	{
		new->next = *head;
		temp->prev = new;
		*head = new;
	}
	return (new);
}
