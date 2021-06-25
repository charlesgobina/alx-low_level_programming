
#include "holberton.h"

/**
 * print_square - checks if alphabet is upper or lowercase
 *
 * @size: first integer
 * Return: void
 */

void print_square(int size)
{
	int height = 1;
	int width = 1;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (height <= size)
		{
			width = 1;
			while (width <= size)
			{
				_putchar('#');
				width++;
			}
			height++;
			_putchar('\n');
		}
	}
}
