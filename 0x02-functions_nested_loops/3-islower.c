#include "main.h"

/**
 * _islower - check if a character is lowercase
 *
 * @c: - parameter type int
 *
 * Return: 1 if `c` is lowercase
*/
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
