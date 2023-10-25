#include "lists.h"

/**
 * listint_len - Counts the number of elements
 * @h: Pointer to the head of the list.
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	unsigned int c = 0;

	while (node)
	{
		node = node->next;
		c++;
	}
	return (c);
}
