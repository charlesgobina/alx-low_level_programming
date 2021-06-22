#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints integers from n to 98
 *
 * @n: integer 1
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
	printf("\n");

}
