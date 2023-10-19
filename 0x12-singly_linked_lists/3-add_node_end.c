#include "lists.h"

/**
 * add_node_end - add a node to the end of the list
 * @head: a node to be added
 * @str: str of the node
 * Return: Address of the new node, or NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);

	list->str = strdup(str);
	
	if (list->str == NULL)
	{
		free(list);
		return (NULL);
	}

	list->len = strlen(str);
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
	}
	else
	{
		list_t *cur = *head; /* current node */

		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = list;
	}

	return (list);
}
