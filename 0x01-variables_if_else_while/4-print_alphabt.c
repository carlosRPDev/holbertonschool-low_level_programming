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
		if (n == 101 || n == 113)
		{
		}
		else
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
