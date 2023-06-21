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
	int lastnumber;
	char text[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnumber = n % 10;

	if (lastnumber > 5)
	{
	/* if condition is true then print the following */
		printf("%s %d is %d and greater than 5\n", text, n, lastnumber);
	}
	else if (lastnumber == 0)
	{
		printf("%s %d is %d and is 0\n", text, n, lastnumber);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", text, n, lastnumber);
	}
	return (0);
}
