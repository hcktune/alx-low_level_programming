#include "lists.h"

/**
 * free_listint2 - Frees a link_list
 * @head: Pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
