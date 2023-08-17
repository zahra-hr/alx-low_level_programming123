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
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
