#include "holberton.h"

/**
 *print_line - prints line
 *Description: c value loops
 *@n: n lines
 *Return: Always 0.
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar(10);
}
