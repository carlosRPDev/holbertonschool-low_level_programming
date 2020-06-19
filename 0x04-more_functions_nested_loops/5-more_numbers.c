#include "holberton.h"

/**
 *more_numbers - prints numer of 0 ...14
 *
 *Return: Always 0.
 */

void more_numbers(void)
{
	int n;
	int l;

	for (n = 0; n < 10; n++)
	{
		for (l = 0; l < 15; l++)
		{
			if (l >= 10)
			{
				_putchar(l / 10 + '0');
			}
			_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}
