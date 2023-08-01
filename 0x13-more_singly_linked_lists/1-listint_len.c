#include "lists.h"

/**
  * listint_len - show the number of elements in a linked listint_t list.
  * @h: A linked list
  *
  * Return: The number of elements list.
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
