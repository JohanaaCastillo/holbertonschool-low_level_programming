#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Entry point
 *
 * Descripcion: "Write a program that prints the alphabet in lowercase"
 *
 * Return: Always zero success
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
