#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a list.
  * @head: The original linked list
  * @n: The integer to add to the node
  *
  * Return: The address of the new element, or NULL if it failed.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
