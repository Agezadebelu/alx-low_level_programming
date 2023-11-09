#include "lists.h"

/**
 * get_dnodeint_at_index - eturns the nth node of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: if the node does not exist, return NULL
 *          where index is the index of the node, starting from 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temph;
	unsigned int toindex = 0;

	temph = head;

	while (temph != NULL)
	{
		if (toindex == index)
			return (temph);
		toindex++;
		temph = temph->next;
	}
	if (toindex == 0 || toindex < index)
		return (temph);

	temph = head;
	return (temph->next);
}
