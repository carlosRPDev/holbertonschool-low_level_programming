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

	l = 0;
	while (l < 100)
	{
		c = l + 1;
		while (c < 100)
		{
			putchar(l / 10 + '0');
			putchar(l % 10 + '0');
			putchar(' ');
			putchar(c / 10 % 10 + '0');
			putchar(c % 10 + '0');
			if (l == 98)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			c++;
		}
		l++;
	}
	putchar('\n');
	return (0);
}
