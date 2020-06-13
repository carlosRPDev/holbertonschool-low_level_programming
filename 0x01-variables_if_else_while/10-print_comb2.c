#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int l;
	int c;

	for (l = 48; l <= 57; l++)
	{
		for (c = 48; c <= 57; c++)
		{
			putchar(l);
			putchar(c);

			if (l < 57 || c < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
