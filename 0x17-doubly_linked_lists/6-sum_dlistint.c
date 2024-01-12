#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n)
 * @head: head pointer
 * Return: sum of (n), if the list is empty return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	temp = head;

	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
