#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Entry point
 *
 * Descripcion: "Write a program  that prints all
 * possible different combinations of two digits"
 *
 * Return: Always zero success
*/

int main(void)
{
	int digit1;
	int digit2;

		for (digit1 = '0'; digit1 <= '9'; digit1++)
		{
			for (digit2 = '1'; digit2 <= '9'; digit2++)
			{
				if (digit1 < digit2)
				{
					putchar(digit1);
					putchar(digit2);
					if (digit1 != '8' || (digit1 == '8' && digit2 != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
			putchar('\n');
			return (0);
}
