#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
*/

void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i <= 23)
	{
		j = 0;
		while (j < 60)
		{
			if (i < 10)
				_putchar('0' + 0);
			_putchar(i);
			_putchar(':');
			if (j < 10)
				_putchar('0' + 0);
			_putchar(j);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
