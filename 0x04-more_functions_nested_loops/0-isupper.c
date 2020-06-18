#include "holberton.h"
#include <ctype.h>
/**
 *_isupper - chekc if char is upper
 *@c: value of char
 *Return: Always 0.
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
