#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: head pointer
 * @index: index of nth node
 * Return: nth node if it exists, NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
