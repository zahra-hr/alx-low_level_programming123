#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: parameter
 * Return: void
*/

void rev_string(char *s)
{
	int k, j;
	char tmp;

	k = 0;
	while (s[k] != '\0')
	{
		;
		k++;
	}
	j = 0;
	while (j < k / 2)
	{
		tmp = s[j];
		s[j] = s[k - 1 - j];
		s[k - 1 - j] = tmp;
		j++;
	}
}
