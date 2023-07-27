#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function with one srgument
 * @head: pointer to list_t
 *
 * Description: frees a list
 * Return: void
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
