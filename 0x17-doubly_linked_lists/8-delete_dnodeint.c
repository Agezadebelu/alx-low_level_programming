#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int idx = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = (*head)->next;
		temp->prev = NULL;
		/*free(temp);*/
		return (1);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (idx == index)
		{
			temp2 = temp->next;
			temp2->prev = temp->prev->prev;
			temp = temp2->prev;
			temp->next = temp2->next->next;
			/*free(temp2);*/
			return (1);
		}
		temp = temp->next;
		idx++;
	}
	if (idx < index)
		return (-1);
	if (temp->next == NULL)
		return (1);

	return (-1);
}
