#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: the caracter to print
 *
 * Return: Success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}