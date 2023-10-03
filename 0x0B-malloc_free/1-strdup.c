#include "main.h"

/**
* _strduptr - duplicate the buffer 
* @str: string 
* Return: pointer, points to the same value of an pointer
*/

char *_strduptr(char *str)
{
	int j, i;
	char *ptr;

	i = 0;

	if (str == NULL)
		return (NULL);

	
	while (str[i] != '\0')
		i++;

	ptr = malloc(i + 1);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	ptr[j] = '\0';

	return (ptr);

}
