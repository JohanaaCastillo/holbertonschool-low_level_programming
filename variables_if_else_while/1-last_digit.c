#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Descripcion: "This program will assign a random number to the variable n
 * each time it is executed"
 *
 * Return: Always zero success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n < 5)
	{
	/* if condition is true then print the following */
		printf("Last digit of %d is and greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is  and is less than 6 and not 0\n", n);
	}
	return (0);
}
