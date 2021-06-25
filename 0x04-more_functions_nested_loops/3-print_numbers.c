#include "holberton.h"

/**
 * print_numbers - checks if alphabet is upper or lowercase
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
