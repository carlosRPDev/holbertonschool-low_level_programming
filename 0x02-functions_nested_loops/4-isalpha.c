#include "ctype.h"

/**
 * _isalpha - prints if letter of the alphabet is lowercase or uppercase
 *
 * @c: The character to check
 *
 * Return: 0 sucesfull
 */

int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
