#include "main.h"

/**
 * print_last_digit - function to print the last digit
 *
 * @v: parameter to get the last digit
 *
 * Return: integer
*/

int print_last_digit(int v)
{
	int lastd;

	if (v >= 0)
		lastd = v % 10;
	else
		lastd = (-1) * (v % 10);
	_putchar('0' + lastd);
	return (lastd);
}
