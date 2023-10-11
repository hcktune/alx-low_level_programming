#include "function_pointers.h"

/**
 * array_iterator - array of pointers points to function to execute it
 * @array: ptr 
 * @size: arr's size
 * @action: execution 
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t length = 0;

	if (array != NULL && size != 0 && action != NULL)
	{
		while (l < size)
		{
			action(array[l]);
			l++;
		}
	}
}
