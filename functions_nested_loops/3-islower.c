#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character
 *
 * @c: character to compare
 *
 * Return: 1 if the true, 0 if false
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
