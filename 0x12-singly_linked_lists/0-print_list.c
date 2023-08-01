#include "lists.h"

/**
 * print_list - print the elements of a linked list.
 * @h: liked list head.
 *
 * Return: amount of nodes of the linked list.
 *
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
