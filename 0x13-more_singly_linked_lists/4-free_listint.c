#include "lists.h"

/**
 * free_listint - Frees
 * @head: ptr
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node = head;
	listint_t *tmp = NULL;

	while (node)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
}
