#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints alphabet from a-z without q and e
 *
 * Description: prints alphabet from a-z without q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		alpha++;
	}
	return (0);
}
