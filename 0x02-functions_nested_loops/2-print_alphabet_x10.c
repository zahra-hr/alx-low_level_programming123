#include "main.h"

/**
 * print_alphabet_x10 - utilizes _putchar to write alphabets 10 times
*/

void print_alphabet_x10(void)
{
	int i = 0;
	int c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
