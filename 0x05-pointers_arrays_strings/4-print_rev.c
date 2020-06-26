#include "holberton.h"

/**
 * print_rev - print reverse a string
 * @s: variable that contain a string
 */
void print_rev(char *s)
{
	int a;
	int b;
	int c;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	c = a;
	for (b = c - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
