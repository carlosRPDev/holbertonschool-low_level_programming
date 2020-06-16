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
	if (d > 0)
	{
		d = d % 10;
		_putchar('0' + d);
	}
	else if (d == 0)
	{
		_putchar('0' + d);
	}
	else
	{
		d *= -1;
		d = d % 10;
		_putchar('0' + d);
	}
	return (d);
}
