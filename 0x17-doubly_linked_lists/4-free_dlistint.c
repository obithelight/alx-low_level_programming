#include "lists.h"

/**
 * free_dlistint - function thats frees a doubly linked list
 * @head: head pointer
 * Return: returns nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
