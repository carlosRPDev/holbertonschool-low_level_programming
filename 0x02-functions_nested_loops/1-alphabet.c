#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: 0 sucesfull
 */

void print_alphabet(void)
{
	char l = 97;

	while (l <= 122)
	{
		_putchar(l);
		l++;
	}
	_putchar(10);
}
