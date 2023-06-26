#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Entry point
 *
 * Descripcion: "Write a program that prints all 
 * single digit numbers of base 10 starting from 0"
 *
 * Return: Always zero success
*/

int main(void)
{
        int num;

        for (num = 0; num < 10; num++)
        {
		printf("%d\n",num);
        }
        return (0);
}
