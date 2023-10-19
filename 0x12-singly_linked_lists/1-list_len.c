#include "lists.h"

/**
 * list_len - length of lists's struct
 * @h: head
 * Return: len 
*/

size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t len = 0;

	while (p != NULL)
	{
		len += 1;
		p = p->next;
	}
	return (len);
}
