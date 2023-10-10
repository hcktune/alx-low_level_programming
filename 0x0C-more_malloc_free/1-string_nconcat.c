#include "main.h"
/**
* string_nconcat -  concatenation function
* @str1: first string 
* @str2: second string to be contatenated
* @n: number of characters to concat
* Return: string concatenation function
*/
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0;

	unsigned int i = 0;

	char *string;


	if (str1 == NULL)
		str1 = "";
		
	if (str2 == NULL)
		str2 = "";

	while (str1[l1] != '\0')
		l1++;
		
	while (str2[l2] != '\0')
		l2++;

	if (l2 < n)
		n = l2;

	string = (char *)malloc(sizeof(char) * (l1 + n + 1));

	if (string == NULL)
		return (NULL);

	while (i < l1 + n)
	{
		if (i >= l1)
			string[i] = str2[i - l1];
		else
			string[i] = str1[i];
		i++;
	}
	
	string[i] = '\0';
	
	return (string);
}
