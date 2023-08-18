#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
*/

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = 0;
		print_numbers();
		while (j <= 4)
		{
			_putchar('0' + 1);
			_putchar('0' + j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
