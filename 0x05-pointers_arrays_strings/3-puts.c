#include "holberton.h"

/**
 * _puts - print a string
 *
 * @str: pointer
 *
 * Return: 0 sucessfull
 */

void _puts(char *str)
{
	int zero = 0;

	while (str[zero])
	{
		_putchar(str[zero]);
		zero++;
	}
	_putchar (10);
}
