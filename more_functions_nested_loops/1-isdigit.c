#include "main.h"

/**
* _isupper - Function that checks for a digit (0 through 9)
*
*  @c: Integer
*
* Return: Always 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		{ 
			return (1);	
		}
	else
		{	
			return (0);
		}
}