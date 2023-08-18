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
		putchar('\n');
	else
	{
		while (i < n)
		{
			putchar('\');
			i++;
		}
		putchar('\n');
	}
}
