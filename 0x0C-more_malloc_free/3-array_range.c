#include "main.h"

/**
* array_range - array of elements
* @min: min
* @max: max
* Return: pointer ==> array
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = (int *)malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
