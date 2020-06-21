#include "holberton.h"

/**
 * print_triangle - print triangle
 * @size: Triangle
 */



void print_triangle(int size)
{
	int l, c, n;

	for (l = 0; l < size; l++)
	{

		n = size;
		for (c = 0; c < size; c++)
		{
			if (n <= (l + 1))
			{
				_putchar(35);
			}
			else
			{
				_putchar(' ');
			}
			n--;
		}
		_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}
