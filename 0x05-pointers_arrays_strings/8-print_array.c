#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 *
 * @n: variable to be used
 * @a: variable to be used
 */

void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", a[arr]);
		if (arr < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
