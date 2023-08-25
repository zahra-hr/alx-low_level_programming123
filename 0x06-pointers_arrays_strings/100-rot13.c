#include "main.h"

/**
 * flip - function to change string
 * @alpha1: parameter
 * @alpha2: parameter
 * @s: parameter
 * Return: character
*/

char flip(char *alpha1, char *alpha2, s)
{
	int i = 0;

	while (alpha1[i] != '\0')
	{
		if (s == alpha1[i])
			return (alpha2[i]);
		i++;
	}
	return (s);
}
/**
 * *rot13 - function that encodes a string using rot13
 * @str: parameter
 * Return: string
*/

char *rot13(char *str)
{
	char *p = str;
	char a1[] = "ABCDEFGHIJKLM";
	char a2[] = "NOPQRSTUVWXYZ";
	char a3[] = "abcdefghijklm";
	char a4[] = "nopqrstuvwxyz";
	int i = 0;

	while (p[i] != '\0')
	{
		p[i] = flip(a1, a2, p[i]);
		p[i] = flip(a2, a1, p[i]);
		p[i] = flip(a3, a4, p[i]);
		p[i] = flip(a4, a3, p[i]);
		i++;
	}
	return (p);
}
