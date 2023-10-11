#include "function_pointers.h"

/**
 * int_index - search for function's index
 * @array: array of function
 * @size: array's size
 * @cmp: function pointer comparison
 * Return: Int
*/

void int_index(int *array, size_t size, int (*cmp)(int))
{
	if (size <= 0 || cmp == NULL || array == ((*void)0))
		return (-1);
	
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])
			return (i);
	}

	return (-1);
}
