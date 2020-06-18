#include "holberton.h"

/**
 * times_table - print times table
 *
 *
 * Return: table 9
 */

void times_table(void)
{

	int r;
	int d;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (r >= 10)
			{
			_putchar(r / 10 + '0');
			d = r % 10;
			_putchar(d + '0');
			}
			else
			{
				_putchar(r + '0');
			}

			if (j == 9)
			{
			}
			else
			{
				if (i * (j + 1) >= 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
