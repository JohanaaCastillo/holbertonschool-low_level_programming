#include "main.h"

/**
 * print_last_digit - Write a function the last digit of a number
 *
 * @n: integer to get last digit
 *
 * Return: last digit of number
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 10)
	{
		last = last * -1;
	}
		_putchar(last + '0');
		return (last);
}
