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
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
