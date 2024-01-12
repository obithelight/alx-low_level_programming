#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: head pointer
 * @index: index of nth node
 * Return: NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->prev = NULL;
	newnode->next = NULL;

	if (head == NULL)
		newnode = head;

	temp = head;

	while (temp->next != NULL)
	{
		newnode->next = temp;
	}
	return (newnode);
}
