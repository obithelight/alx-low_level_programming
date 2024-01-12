#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: head pointer
 * @idx: index of list where new node should be added
 * @n: integer to be added
 * Return: nth node if it exists, NULL otherwise
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}


	temp = *h;
	while (temp != NULL && idx > 0)
	{
		temp = temp->next;
		idx--;
	}

	if (temp != NULL)
	{
		newnode->prev = temp->prev;
		newnode->next = temp;
		if (temp->prev != NULL)
			temp->prev->next = newnode;
		temp->prev = newnode;
	}
	return (newnode);
}
