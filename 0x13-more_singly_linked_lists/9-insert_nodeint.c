#include "lists.h"

/**
 * insert_nodeint_at_index - Insert new node at index
 * @head: Pointer
 * @idx: Index
 * @n: Integer
 * Return: Address of the newly inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head;
	listint_t *insert_node = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!insert_node)
		return (NULL);

	insert_node->n = n;
	insert_node->next = NULL;

	if (idx == 0)
	{
		insert_node->next = *head;
		*head = insert_node;
		return (insert_node);
	}

	while (node)
	{
		if (x == idx - 1)
		{
			insert_node->next = node->next;
			node->next = insert_node;
			return (insert_node);
		}
		x++;
		node = node->next;
	}

	free(insert_node);
	return (NULL);
}
