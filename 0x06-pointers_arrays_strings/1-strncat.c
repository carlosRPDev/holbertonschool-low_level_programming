#include "holberton.h"

/**
 * *_strncat - Concatenates two strings
 *
 * @dest: value of the pointer
 * @src: value of the other pointer
 * @n: n values
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
