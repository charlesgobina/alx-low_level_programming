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

printf("Size of char: %zu byte(s)\n", sizeof(chartype));
printf("Size of int: %zu byte(s)\n", sizeof(inttype));
printf("Size of long int: %zu byte(s)\n", sizeof(long_inttype));
printf("Size of long long int: %zu byte(s)\n", sizeof(long_long_inttype));
printf("Size of float: %zu byte(s)\n", sizeof(floattype));
return (0);
}
