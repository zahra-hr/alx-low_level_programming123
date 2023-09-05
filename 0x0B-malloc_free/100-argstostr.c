#include "main.h"

/**
 * _strlen - length of string
 * @s: string
 * Return: integer
*/

int _strlen(char *s)
{
	int sz;

	for (sz = 0; s[sz] != '\0'; sz++)
	;
	return (sz);
}
/**
 * *argstostr - function that concatenates all the arguments
 * @ac: parameter
 * @av: parameter
 * Return: char
*/

char *argstostr(int ac, char **av)
{
	int i, j, n;
	int c = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (n = 0, i = 0; i < ac; i++)
	{
		n += _strlen(av[i]);
		n++;
	}
	x = malloc(sizeof(char) * n + 1);
	if (x == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			x[c] = av[i][j];
			c++;
		}
		x[c] = '\n';
		c++;
	}
	x[c] = '\0';
	return (x);
}
