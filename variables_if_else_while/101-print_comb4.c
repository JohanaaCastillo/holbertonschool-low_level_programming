#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Entry point
 *
 * Descripcion: "Write a program  that prints all
 * possible different combinations of three digits."
 *
 * Return: Always zero success
*/

int main(void)
{
	int digit1 = '0';
	int digit2;
	int digit3;

		while (digit1 <= '9')
		{
			digit2 = '0';
			while (digit2 <= '9')
			{
				digit3 = '0';
				while (digit3 <= '9')
				{
					if (digit1 < digit2 && digit2 < digit3)
					{
						putchar(digit1);
						putchar(digit2);
						putchar(digit3);
						if (digit1 != '7')
						{
							putchar(',');
							putchar(' ');
						}
					}
					digit3++;
				}
				digit2++;
			}
			digit1++;
		}
			putchar('\n');
			return (0);
}