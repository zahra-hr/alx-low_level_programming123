#include "main.h"

/**
 * _strcmp -  function that compares two strings
 * @s1: parameter
 * @s2: parameter
 * Return: integer
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	if (s1[i] == '\0')
		return (-s2[i]);
	else
		return (-s1[i]);
}
