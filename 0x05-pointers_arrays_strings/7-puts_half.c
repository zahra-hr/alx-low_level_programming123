#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: parameter
*/

void puts_half(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		;
		j++;
	}
	j++;
	j /= 2;
	while (str[j] != '0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
