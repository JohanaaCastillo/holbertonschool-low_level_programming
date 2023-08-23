#include "function_pointers.h"

/**
* array_iterator - Function a array
*
*@array: int
*@size: array
*@action: pointer of function
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		if (action == NULL)
			return;
		(*action)(array[i]);
	}
}
