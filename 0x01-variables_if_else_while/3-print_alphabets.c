#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 97; n < 123; n++)
	{
		putchar(n);
	}
	for (n = 65; n < 91; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
