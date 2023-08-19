#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: parameter
*/

void print_triangle(int size)
{
	int i = 1;
	int j, d;

	while (i <= size)
	{
		j = size - i;
		d = 1;
		while (d <= size)
		{
			if (d <= j)
				_putchar(' ');
			else
				_putchar('#');
			d++;
		}
		_putchar('\n');
		i++;
	}
}
