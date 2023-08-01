#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list.
  * @h: A linked list
  *
  * Return: The number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	const listint_t *temp = NULL;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
