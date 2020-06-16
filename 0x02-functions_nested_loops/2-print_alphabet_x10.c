#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: 0 sucesfull
 */

void print_alphabet_x10(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		char l = 97;

		while (l <= 122)
		{
			_putchar(l);
			l++;
		}
		_putchar(10);
	}
}
