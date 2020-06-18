#include "holberton.h"

/**
 *_isupper - chekc if char is upper
 *@c: value of char
 *Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
