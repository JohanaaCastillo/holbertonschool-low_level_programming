#include "main.h"
/**
 * _puts_recursion - Function that prints a string in reverse
 * 
 * @s: string
 *
 * Return : Success 0
 */
void _print_rev_recursion(char  *s)
{
    if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}