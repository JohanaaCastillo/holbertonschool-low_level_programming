#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal
 *
 * @n : Time diagonal line is printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            _putchar(' ');
        }
        _putchar(92);
        if (i < (n - 1))
            _putchar('\n');
    }
    _putchar('\n');
}