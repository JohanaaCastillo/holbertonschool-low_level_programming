#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character
 *
 * @c: character to compare
 *
 * Return: 1 if the true, 0 if false
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
