#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Entry point
 *
 * Descripcion: "Write a program  that prints all
 * possible combinations of single-digit numbers"
 *
 * Return: Always zero success
*/

int main(void)
{
	int digit = '0';

		while (digit <= '9')
		{
			putchar(digit);
				if (digit <= '8')
				{
					putchar(',');
					putchar(' ');
				}
			digit++;
		}
			putchar('\n');
			return (0);
}
