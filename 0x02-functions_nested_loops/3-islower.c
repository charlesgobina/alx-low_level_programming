#include "holberton.h"

/**
 * _islower - checks if alphabet is upper or lowercase
 *
 * @c: character to be checked
 * Return: void
 */

int _islower(int c)
{
	char low = 'a';
	char high = 'A';
	int checked;

	while (low <= 'z')
	{
		if (c == low)
		{
			checked = 1;
		}
		else
		{
			while (high <= 'Z')
			{
				if (c == high)
				{
					checked = 0;
				}
				high++;
			}
		}
		low++;
	}
	return (checked);
}
