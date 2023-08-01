#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: The original linked list
  * @n: The integer to add to the node
  *
  * Return: The address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;
	temp = *head;
	if (newnode == NULL)
		return (NULL);

	if (temp == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
