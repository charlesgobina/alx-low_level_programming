#include "holberton.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @int: integer to be converted into absolute value form
 * Return: void
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
