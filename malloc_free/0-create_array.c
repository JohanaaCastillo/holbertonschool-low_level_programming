#include "main.h"
#include <stdlib.h>

/**
* create_array - Function that creates an array of chars, and initializes it with a specific char
*
* @size: number of variable
* @c: char
*
* Return: NULL 
*/

char *create_array(unsigned int size, char c)
{
	char *Array;
	unsigned int i;

	if (size == 0)

		return (NULL);

	Array = malloc(sizeof(c) * size);

	if (Array == NULL)

		return (0);

	for (i = 0; i <= size; i++)
	{
		Array[i] = c;
	}
		return (Array);
}