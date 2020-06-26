#include "holberton.h"

/**
 * puts_half - prints half of a string followed by new line
 *
 * @str: the string to be printed
 */

void puts_half(char *str)
{
	int n;
	int cant;

	cant = 0;
	for (n = 0; str[n] != '\0'; n++)
	{
		cant++;
	}
	for (n = (cant + 1) / 2; n < cant; n++)
	{
		_putchar(str[n]);
	}
	_putchar(10);
}
