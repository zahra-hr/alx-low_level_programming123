#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: parameter
*/
void print_diagonal(int n)
{
	int i = 0;

	if (n < 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			_putchar(92);
			i++;
		}
		_putchar('\n');
	}
}
