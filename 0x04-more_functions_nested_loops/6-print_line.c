
#include "holberton.h"

/**
 * print_line - checks if alphabet is upper or lowercase
 *
 * @n: first integer
 * Return: void
 */

void print_line(int n)
{
	int counter = 0;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (counter <= n)
		{
			_putchar('_');
			counter++;
		}
		_putchar('\n');
	}
}
