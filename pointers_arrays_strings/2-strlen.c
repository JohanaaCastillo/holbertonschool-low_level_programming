#include "main.h"
/**
* _strlen - Function that returns the lenght of a string
*
* @s: string
*
* Return: Always 0.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
