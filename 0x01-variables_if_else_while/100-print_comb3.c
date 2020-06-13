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

	l = 1;
	while (l < 90)
	{
		if (l % 10 == 0)
		{
			c = l / 10;
			l += c + 1;
		}
		putchar(l / 10 % 10 + '0');
		putchar(l % 10 + '0');

		if (l < 88)
		{
			putchar(44);
			putchar(32);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
