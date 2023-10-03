#include "main.h"

/**
* str_concat -  concatenates two strings.
* @s1: str1
* @s2: str2
* Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2;
	int i, j;
	char *result;

	len_s1 = 0;
	len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	result = malloc(len_s1 + len_s2 + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		result[i] = s1[i];
	for (j = len_s1; j < len_s2 + len_s1; j++)
		result[j] = s2[j - len_s1];

	result[len_s1 + len_s2] = '\0';

	return (result);
}
