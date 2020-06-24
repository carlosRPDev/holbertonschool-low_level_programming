#include "holberton.h"

/**
 * _strlen - returns the length of a strings
 *
 * @len: position of the array
 *
 * Return: 0 if was executed sucesfully
 */

int _strlen(char *s)
{
	int len = 0;
	
	while (s[len] != '\0')
		len++;

	return (len);
}
