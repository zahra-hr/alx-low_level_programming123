#include "main.h"

/**
 * print_alphabet - utilizes _putchar to print alphabets from a to z
*/

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
