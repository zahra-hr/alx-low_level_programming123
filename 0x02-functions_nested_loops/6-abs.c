#include "main.h"

/**
 * _abs - turn the number to absolute value
 *
 * @n: parameter to transform it
 *
 * Return: integer absolute int
*/

int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}
