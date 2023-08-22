#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: parameter
 * Return: c success
*/

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		++c;
		s++;
	}
	return (c);
}
