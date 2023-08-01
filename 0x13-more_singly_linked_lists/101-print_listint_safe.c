#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	if (!head)
		exit(98);
	current = head;
	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;
	}
	return (count);
}
