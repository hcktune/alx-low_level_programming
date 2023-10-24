#include "lists.h"

/**
 * get_nodeint_at_index - get node at specfific index
 * @head: ptr
 * @index: Index
 * Return: Pointer at specific index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (node)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}

	return (NULL);
}
