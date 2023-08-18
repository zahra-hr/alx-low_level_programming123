#include "main.h"

/**
 * _isdigit - function to check if it is digit
 *
 * @c: parameter
 *
 * Return: 1 success 0 otherwise
 *
*/

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
