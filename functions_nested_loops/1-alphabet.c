#include "main.h"

/**
 * main - Entry point
 *
 * Description: "void print_alphabet(void) prints the alphabet, in lowercase"
 *
 * Return: Always zero success
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
