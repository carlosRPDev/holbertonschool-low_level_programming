#include "holberton.h"

/**
 *_isupper - chekc if char is upper
 *@c: value of char
 *Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57 )
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
