#include "lists.h"

/**
 * free_list - frees the memory
 * @head: head ptr
 */

void free_list(list_t *head)
{
	list_t *list = head;
	list_t *next;

	while (list != NULL)
	{
		next = list->next;
		free(list->str);
		free(list);
		list = next;
	}
}
