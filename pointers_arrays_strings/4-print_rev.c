#include "main.h"
/**
* print_rev - Function that prints a string, in reverse, followed by a new line
*
* @s: string
*
* Return: Always 0.
*/
void print_rev(char *s)
{
	int i, j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
		_putchar('\n');
}
