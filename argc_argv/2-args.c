#include "main.h"

/**
 * main - Print all arguments it receives
 *
 * @argc: integer
 * @argv: string
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
