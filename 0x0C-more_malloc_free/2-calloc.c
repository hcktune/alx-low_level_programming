#include "main.h"

/**
* _calloc -   allocates memory for an array
* of size bytes each and returns a pointer to the allocated memory
* @nmemb: number of bytes to allocate for the array of nmemb elements
* @size: size of the array
* Return: pointer to the  memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	unsigned int i;

	if ((nmemb <= 0) || (size <= 0))
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((char *)(ptr))[i] = 0;

	return (ptr);
}
