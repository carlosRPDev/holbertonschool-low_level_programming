#include "holberton.h"
#include <stdio.h>

/**
 *main - fizzbuzz
 *Return: Always 0.
 */

int main(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if (((l % 3) == 0) && ((l % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			if ((l % 3) == 0)
			{
				printf("Fizz");
			}
			else
			{
				if ((l % 5) == 0)
				{
					printf("Buzz");
				}
				else
				{
					printf("%d", l);
				}
			}
		}
		if (l != 100)
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
