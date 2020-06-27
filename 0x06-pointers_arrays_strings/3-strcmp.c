#include "holberton.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: value a string
 * @s2: value a string
 *
 * Return: comparation
 */

int _strcmp(char *s1, char *s2)
{
	char *a = s1;
	char *b = s2;

	while (*a != '\0' && *b != '\0' && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}
