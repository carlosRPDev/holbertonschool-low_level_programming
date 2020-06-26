#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: variable that contain a reserved string
 */

void rev_string(char *s)
{
	int a;
	int can;
	char c;

	can = 0;
	for (a = 0; s[a] != '\0'; a++)
		can++;

	for (a = 0; a < can; a++)
	{
		c = s[a];
		s[a] = s[can - 1];
		s[can - 1] = c;
		can--;
	}
}
