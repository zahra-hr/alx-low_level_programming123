#include "main.h"

/**
 * *_strdup - function returns a pointer to a new string
 * @str: parameter
 * Return: n
*/

char *_strdup(char *str)
{
	int x = 0;
	int s = 0;
	char *n;

	if (str == NULL)
		return (NULL);
	for (; str[s] != '\0'; s++)
	;
	n = malloc(s * sizeof(*str) + 1);
	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (; x < s; x++)
			n[x] = str[x];
	}
	return (n);
}
