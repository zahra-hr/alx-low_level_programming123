#include "main.h"


/**
 * print_square - function that draws a square
 *
 * @size: parameter
*/
void print_square(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			j = 1;
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
