#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add positive numbers
 *
 * @argc: numbers
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int i, j, Sum;

	Sum = 0;
	if (argc == 1)
		printf("0\n");
	if (argc > 1)
		{
		for (i = 1; i < argc; i++)
		{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
				Sum = Sum + atoi(argv[i]);
		}
			printf("%d\n", Sum);
		}
	return (0);
}
