#include "main.h"

/**
 * _isalpha - check if a character is letter
 *
 * @c: - parameter type int
 *
 * Return: 1 if `c` is lowercase or uppercase
*/
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
