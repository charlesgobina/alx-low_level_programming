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
	char beta = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (beta <= 'Z')
	{
		putchar(beta);
		beta++;
	}

	return (0);
}
