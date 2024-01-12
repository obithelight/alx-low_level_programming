#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of list
 * @head: head pointer
 * @index: index of nth node
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (head == NULL)
		return (-1);

	temp = *head;
	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}
	temp->prev = temp->next;
	temp->next = temp->prev;

	return (1);
}
