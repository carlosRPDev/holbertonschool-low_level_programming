#include "holberton.h"

/**
 * *_strncpy - Concatenates two strings
 *
 * @dest: value of the pointer
 * @src: value of the other pointer
 * @n: n values
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
