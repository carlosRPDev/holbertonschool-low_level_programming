#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long l;
long long ll;
float f;
printf("Size of a char: %d bytes(s)\n", sizeof(c));
printf("Size of an int: %d bytes(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(l));
printf("Size of a long long int: %d byte(s)\n", sizeof(ll));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
