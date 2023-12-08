#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @listHead: head
 * @targetIndex: index
 * @value: value
 * Return: the address of the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **listHead, unsigned int targetIndex, int value)
{
	dlistint_t *currentHead;
	dlistint_t *newNode;
	unsigned int currentIndex;
	newNode = NULL;
	if (targetIndex == 0)
		newNode = add_dnodeint(listHead, value);
	else
	{
		currentHead = *listHead;
		currentIndex = 1;
		if (currentHead != NULL)
			while (currentHead->prev != NULL)
				currentHead = currentHead->prev;
		while (currentHead != NULL)
		{
			if (currentIndex == targetIndex)
			{
				if (currentHead->next == NULL)
					newNode = add_dnodeint_end(listHead, value);
				else
				{
					newNode = malloc(sizeof(dlistint_t));
					if (newNode != NULL)
					{
						newNode->n = value;
						newNode->next = currentHead->next;
						newNode->prev = currentHead;
						currentHead->next->prev = newNode;
						currentHead->next = newNode;
					}
				}
				break;
			}
			currentHead = currentHead->next;
			currentIndex++;
		}
	}

	return (newNode);
}
