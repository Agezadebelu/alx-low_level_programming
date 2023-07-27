#include "lists.h"

/**
 * print_list - function with one argument
 * @h: const pointer type
 *
 * Return: numbner of nodes in singly linked list
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (lil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
