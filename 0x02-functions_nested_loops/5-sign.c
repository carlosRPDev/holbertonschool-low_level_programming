#include "holberton.h"

/**
 * print_sign - print if n is positive or zero or negative
 *
 *@n: value at verific
 *
 * Return: 0 sucesfull
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}

}
