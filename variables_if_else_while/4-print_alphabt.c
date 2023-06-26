#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Entry point
 *
 * Descripcion: "Write a program that prints the
 * alphabet in lowercase, and then in uppercase"
 *
 * Return: Always zero success
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
