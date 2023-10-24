#include "lists.h"

/**
 * add_nodeint - Adds a new node
 * @head: ptr to pointer 
 * @n: Int
 * Return: new node 
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
