#include "holberton.h"

/**
 *print_numbers - prints numer of 0 ...9
 *@i: value of int
 *
 *Return: Always 0.
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
