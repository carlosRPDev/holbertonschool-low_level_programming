#include "holberton.h"

/**
 *print_diagonal - chekc if char is upper
 *@n: numbers of lines
 *Return: Always 0.
 */

void print_diagonal(int n)
{
	int s, l;

	for (s = 0; s < n; s++)
	{
		for (l = 0; l < s; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
