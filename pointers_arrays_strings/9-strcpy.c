#include "main.h"
/**
 * print_array - Function that print n elements of an of integers
 *
 * @dest: string
 * @src: string
 *
 * Return: Success 0.
 */
char *_strcpy(char *dest, char *src)
{
    int i, j;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    j = i;
    for (i = 0; i <= j; i++)
    {
        dest[i] = src[i];
    }
    return (dest);
}