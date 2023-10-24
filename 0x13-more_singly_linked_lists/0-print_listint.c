#include "lists.h"

/*
 * print_listint - print all values of the list, output the length
 * @h: ptr to the head
 * Return: number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	unsigned int len = 0;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		len++;
	}
	return (len)
}
