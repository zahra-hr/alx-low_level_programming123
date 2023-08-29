#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 * Return: i
*/

unsigned int _strspn(char *s, char *accept)
{
	for (unsigned int i = 0; s[i] != '\0'; i++)
	{
		for (unsigned int j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
