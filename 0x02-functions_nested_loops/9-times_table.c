#include "holberton.h"

/**
 * times_table - print times table
 *
 *
 * Return: table 9
 */
void times_table(void)
{

	int l;
	int c;
	int r;
	int d;

	l = 0;
	while (l < 10)
	{
		c = 0;
		while (c < 10)
		{
			r = l * c;
			if (r < 10)
			{
				_putchar(' ');
			}
			else
			{
				d = r / 10;
				_putchar('0' + d);
			}
			d = r % 10;
			_putchar('0' + d);
			if (c == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			c++;
		}
		l++;
	}
}
