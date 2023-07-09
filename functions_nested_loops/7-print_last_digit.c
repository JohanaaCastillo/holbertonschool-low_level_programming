#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - Write a function the last digit of a number
 *
 * @n: integer to get last digit
 *
 * Return: last digit of number
*/

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
