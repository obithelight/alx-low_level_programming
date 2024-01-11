#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of a double linked list
 * @head: head pointer
 * @n: integer variable
 * Return: address on success, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head != NULL)
	{
		temp = *head;
		temp->prev = newnode;
		newnode->next = temp;
	}
	*head = newnode;

	return (newnode);
}
