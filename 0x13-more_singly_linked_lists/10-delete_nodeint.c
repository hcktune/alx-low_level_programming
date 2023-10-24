#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: ptr
 * @index: index
 * Return: 1 othewise, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *tmp = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	while (i != index)
	{
		if (!node)
		{
			return (-1);
		}
		tmp = node;
		i++;
		node = node->next;
	}

	tmp->next = node->next;
	free(node);
	return (1);
}
