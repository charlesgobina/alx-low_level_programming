
#include "holberton.h"
#include <stdio.h>

/**
 * main - checks if alphabet is upper or lowercase
 * Description: The fizz buzz program
 * Return: void
 */

int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}

		i++;
	}
	printf("\n");

	return (0);


}
