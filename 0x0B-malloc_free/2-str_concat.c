#include "main.h"

/**
 * _strlen - length of string
 * @a: parameter
 * Return: int
*/
int _strlen(char *a)
{
	int size = 0;

	for (; a[size] != '\0'; size++)
	;
	return (size);
}
/**
 * *str_concat - function that concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * Return: character
*/

char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, i;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	n = malloc((sz1 + sz2) * sizeof(char) + 1);
	if (n == 0)
		return (0);
	for (i = 0; i <= sz1 + sz2; i++)
	{
		if (i < sz1)
			n[i] = s1[i];
		else
			n[i] = s2[i - sz1];
	}
	n[i] = '\0';
	return (n);
}
