#include "main.h"
#include <stdlib.h>

/**
* *_strdup - Function that returns a pointer to a newly allocated space 
in memory, which contains a copy of the string given as a parameter.
*
* @str: string
*
* Return: NULL 
*/
char *_strdup(char *str)
{
	int i, len;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	array = malloc(sizeof(char) * len + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len + 1; i++)
	{
		array[i] = str[i];
	}

	return (array);
}