#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 *
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temph = *h;
	unsigned int toindex = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*h == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (toindex < idx - 1)
	{
		if (temph == NULL)
			return (NULL);
		temph = temph->next;
		toindex++;
	}
	if (temph->next == NULL)
	{
		temph->next = newNode;
		newNode->prev = temph;
		newNode->next = NULL;
		return (newNode);
	}
	newNode->next = temph->next;
	temph->next = newNode;
	newNode->prev = temph;
	newNode->next->prev = newNode;
	return (newNode);
}
