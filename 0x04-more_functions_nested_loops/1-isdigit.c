#include "holberton.h"

/**
 * _isdigit - checks if alphabet is upper or lowercase
 *
 * @c: character to be checked
 * Return: void
 */

int _isdigit(int c)
{
	int checked;

	if (c >= '0' && c <= '9')
	{
		checked = 1;
	}
	else
	{
		checked = 0;
	}

	return (checked);
}
