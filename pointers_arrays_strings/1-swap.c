#include "main.h"
/**
* swap_int - Function that swaps the values of two integers
*
*@a: integer
*@b: integer
*
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int integer = a;

	a = b;
	b = integer;

}
