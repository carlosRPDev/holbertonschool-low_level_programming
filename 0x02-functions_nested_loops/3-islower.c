#include "ctype.h"

/**
 * _islower - prints if letter of the alphabet is lowercase
 *
 * @c: The character to check
 *
 * Return: 0 sucesfull
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
