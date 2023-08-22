#include "main.h"
/**
* rev_string - Function that reverses a string
*
* @s: string
*
* Return: Always 0.
*/
void rev_string(char *s)
{
	char ch;
	int i, j;

	i = 0;
		while (s[i] != '\0')
		{
			i++;
		}
	j = 0;
	{
			while (j <= (i - 1) / 2)
			{
				ch = s[j];
				s[j] = s[i - 1 - j];
				s[i - 1 - j] = ch;
				j++;
			}
	}
}
