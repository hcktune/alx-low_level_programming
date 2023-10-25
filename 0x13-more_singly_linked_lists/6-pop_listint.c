#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t
 * @head: ptr
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int val;

	if (!head || !(*head))
	{
		return (0);
	}


	val = node->n;

	*head = node->next;
	node->next = NULL;
	free(node);

	return (val);
}
