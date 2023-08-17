#include "main.h"

/**
 * times_table - print 9 time table
*/

void times_table(void)
{
	int i = 0;
	int j;
	int all;

	while (i <= 9)
	{
	j = 1;
	_putchar('0');
	while (j <= 9)
	{
		_putchar(',');
		_putchar(' ');
		all = i * j;
		if (all <= 9)
			_putchar(' ');
		else
			_putchar('0' + (all / 10));
		_putchar('0' + (all % 10));
		j++;
	}
	_putchar('\n');
	i++;
	}
}
