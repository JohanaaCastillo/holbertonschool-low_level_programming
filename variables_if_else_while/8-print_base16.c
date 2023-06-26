#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Entry point
 *
 * Descripcion: "Write a program  that prints the
 * number of base 16 in lowercase"
 *
 * Return: Always zero success
*/

int main(void)
{
	int num1;
	int num2;

		for (num1 = 48; num1 <= 57; num1++)
		{
			putchar(num1);
		}
		for (num2 = 97; num2 <= 102; num2++)
		{
			putchar(num2);
		}
			putchar('\n');
			return (0);
}
