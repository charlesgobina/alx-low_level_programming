#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints alphabet from a-z
 *
 * Description: prints alphabet from a-z
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;

	}
	putchar('\n');

	return (0);
}
