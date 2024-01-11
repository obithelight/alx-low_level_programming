#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head pointer
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
