#include "main.h"
/**
* puts2 - Function that prints every
*other character of a string, starting with the first character
*
* @str: string
*
* Return: Always 0.
*/
void puts2(char *str)
{
	int x;

	x = 0;
			while (str[x] != '\0')
		{
				if (x % 2 == 0)
				{
					_putchar(str[x]);
				}
			x++;
		}
	_putchar('\n');
}
