#include "holberton.h"

/**
 * _isalpha - prints if letter of the alphabet is lowercase or uppercase
 *
 * @c: The character to check
 *
 * Return: 0 sucesfully
 */

int _isalpha(int c)
{
	return (c >= 97 && c <= 122);
}

/**
 * *string_toupper - funtion uppercae if lowercase
 *
 * @str: value of the string
 * Return: str
 */

char *string_toupper(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (_isalpha(str[c]))
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}
