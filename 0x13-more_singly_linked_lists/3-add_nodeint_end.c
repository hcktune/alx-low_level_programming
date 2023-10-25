#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to end of list
 * @head: ptr to pointer
 * @n: Int
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!(*head))
		*head = node;
	else
	{
		listint_t *new_node = *head;

		while (new_node->next)
			new_node = new_node->next;

		new_node->next = node;
	}

	return (node);
}
