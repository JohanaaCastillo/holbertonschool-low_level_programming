#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet, in lowercase
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	char alphabet;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
