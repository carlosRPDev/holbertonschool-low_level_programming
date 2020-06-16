#include "holberton.h"

/**
 * main - print the word 'Holberton'
 *
 * Return: 0 sucesfull
 */

int main(void)
{
	int i = 0;

	char word[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	while (i <= 9)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
