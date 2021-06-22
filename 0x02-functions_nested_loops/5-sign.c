#include "holberton.h"

/**
 * print_sign - checks if alphabet is upper or lowercase
 *
 * @n: number to be checked
 * Return: void
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
