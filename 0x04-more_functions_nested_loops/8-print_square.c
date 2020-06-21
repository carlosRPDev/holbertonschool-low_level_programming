#include "holberton.h"

/**
 *print_square - print square
 *
 *@size: return
 *Return: Always 0.
 */

void print_square(int size)
{
	int s, l;

	for (s = 0; s < size; s++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}
