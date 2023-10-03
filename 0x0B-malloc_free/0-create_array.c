#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array using pointers
 * @size: size of array
 * @c: character
 * Return: pointer that points of the beginning of the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
