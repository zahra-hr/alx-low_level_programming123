#include "main.h"

/**
 * _isupper - check if letter is uppercase
 *
 * @c: parameter
 *
 * Return: 1 success 0 failed
*/

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
