#include "holberton.h"

/**
 * times_table - print times table
 *
 *
 * Return: table 9
 */
void times_table(void)
{
	int r, d, l, c;

	for (l = 0; l <= 9; l++)
	{
		for (c = 0; c <= 9; c++)
		{
			r = l * c;
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

			if (c == 9)
			{
			}
			else
			{
				if (l * (c + 1) >= 10)
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
