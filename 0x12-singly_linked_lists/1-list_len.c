#include "lists.h"
/**
 * list_len - length of lists's struct
 * @h: head
 * Return: the length of the list structure
*/
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t len = 0;

	while (ptr != NULL)
	{
		len++;
		p = p->next;
	}
	return (len);
}
