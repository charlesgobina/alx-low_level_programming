#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int inttype;
char chartype;
long int long_inttype;
long long int long_long_inttype;
float floattype;

printf("Size of int: %zu bytes\n", sizeof(inttype));
printf("Size of char: %zu bytes\n", sizeof(chartype));
printf("Size of long int: %zu bytes\n", sizeof(long_inttype));
printf("Size of long long int: %zu bytes\n", sizeof(long_long_inttype));
return (0);
}
