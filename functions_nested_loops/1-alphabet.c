#include "main.h"

/**
 * print_alphabet(void) -  prints the alphabet, in lowercase
 *
 * Return: void
*/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
