#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: parameter
 * @n: parameter
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = n - 1; i >= 0; i--)
	{
		j = a[i];
		while (j != 0)
		{
			_putchar('0' + (j % 10));
			j /= 10;
		}
		if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
