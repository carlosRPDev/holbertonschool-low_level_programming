#include "holberton.h"

/**
 * main - print the word 'Holberton'
 *
 * Return: 0 sucesfull
 */

int main(void)
{
	int i = 0;

	char word[9] = {72, 111, 108, 98, 101, 114, 116, 111, 110};

	while (i <= 9)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
