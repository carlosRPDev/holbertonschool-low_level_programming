#include "holberton.h"

/**
 * puts2 - print every other character staring first character
 *
 *
 * @str: the variale containing the string
 */

void puts2(char *str)
{
	int cant;

	cant = 0;
	while (str[cant] != '\0')
	{
		if (cant % 2 == 0)
		{
			_putchar(str[cant]);
		}
	cant++;
	}
	_putchar(10);
}
