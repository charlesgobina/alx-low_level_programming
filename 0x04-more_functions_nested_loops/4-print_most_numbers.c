#include "holberton.h"

/**
 * print_most_numbers - checks if alphabet is upper or lowercase
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;

	}
	_putchar('\n');
}
