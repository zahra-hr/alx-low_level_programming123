#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: pointer s
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, s1L, s2L;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1L = 0; s1[s1L] != '\0'; s1L++)
		;
	for (s2L = 0; s2[s2L] != '\0'; s2L++)
		;
	s = malloc(s1L + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
