#include "holberton.h"

/**
 * print_last_digit - print last digit of value
 *
 *@d: value at verific
 *
 * Return: 0 sucesfull
 */

int print_last_digit(int d)
{
	if (d < 0)
	{
		d = -1 * (d % 10);
	}
	else
		d = d % 10;
		_putchar(d + '0');

		return (d);
}
