#include "lists.h"
/**
 * print_list - length of the list
 * @h: pointer to the structure
 * Return: the length of the list
*/
size_t print_list(const list_t *h)
{
const list_t *p = h;
size_t l = 0;

	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		l++;
		p = p->next;
	}
	return (l);
}
