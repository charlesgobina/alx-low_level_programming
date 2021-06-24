#include "holberton.h"

/**
 * _isupper - checks if alphabet is uppercase
 *
 * @c: character to be checked
 * Return: void
 */

int _isupper(int c)
{
	int checked;

	if (c >= 'A' && c <= 'Z')
	{
		checked = 1;
	}
	else
	{
		checked = 0;
	}
	return (checked);
}
