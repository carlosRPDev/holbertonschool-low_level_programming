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

/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: value string
 * @n: integer number array
 * Return: reverse string
 */

void reverse_array(int *a, int n)
{
	int c;

	c = 0;
	while (c < n / 2)
	{
		swap_int(a + c, a + n - c - 1);
		c++;
	}

}
