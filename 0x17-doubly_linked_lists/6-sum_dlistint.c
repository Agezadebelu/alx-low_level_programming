#include "lists.h"

/**
 *  sum_dlistint - returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 *
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temph;
	int sum = 0;

	if (head == NULL)
		return (0);

	temph = head;
	while (temph != NULL)
	{
		sum += temph->n;
		temph = temph->next;
	}
	return (sum);
}
