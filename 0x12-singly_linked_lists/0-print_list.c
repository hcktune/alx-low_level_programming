#include "lists.h"

/**
 * print_list - print the all nodes with given a list
 * @h: list_t conttains nodes
 * Return: first node
 */

size_t print_list(const size_t *h)
{
	const list_t *p = h;
	size_t len = 0;

	while (ptr != NULL)
	{
		if (p == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		len++;
		p = p->next;
	}
	return (len);
}
