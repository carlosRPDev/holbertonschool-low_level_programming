#include "holberton.h"
#include <stdio.h>

/* more headers goes there */
/**
*print_to_98-prototype function,
*function
*@n: a number from another function
*Return: the return of finish file
*/

void print_to_98(int n)
{
	int c, j;

	if (n <= 98)
	{
		for (c = n; c <= 98; c++)
		{
			printf("%d", c);
			if (c != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
