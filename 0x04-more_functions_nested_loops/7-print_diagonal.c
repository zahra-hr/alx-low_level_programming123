#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: parameter
*/
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			j = 1;
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
