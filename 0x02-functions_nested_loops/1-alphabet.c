#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
