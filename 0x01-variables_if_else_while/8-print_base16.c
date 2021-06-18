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
	int num = 0;
	char alpha = 'a';

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
