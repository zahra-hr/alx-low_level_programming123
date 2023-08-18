#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
*/

void more_numbers(void)
{
	int i;
	int cnt;
	int j = 0;

	while (j <= 9)
	{
		i = 0;
		while (i <= 14)
		{
			cnt = i;
			if (i > 9)
			{
				_putchar('0' + 1);
				cnt = i % 10;
			}
			_putchar('0' + cnt);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
