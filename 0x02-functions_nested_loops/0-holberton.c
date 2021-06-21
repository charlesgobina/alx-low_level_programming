#include "holberton.h"

/**
 * main - prints holberton
 *
 * Description: prints holterton
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[10] = "Holberton";
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
