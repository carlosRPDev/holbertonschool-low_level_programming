#include "holberton.h"

/**
 * swap_int - swap values between numbers
 *
 * @a: a pointer pointing to an integer with an assigned value
 * @b: a pointer pointing to an integer with an assigned value
 *
 * Return: 0 if was executed sucesfully
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
