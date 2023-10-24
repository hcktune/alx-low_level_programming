#include "lists.h"

/**
 * sum_listint - sum the all value 
 * @head: ptr
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;
	
	if (!head)
		return (0);

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
