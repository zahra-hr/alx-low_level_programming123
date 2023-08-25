#include "main.h"

/**
 * ch - function to check Separators of words
 * @x: parameter
 * Return: -1 if success 0 otherwise
*/

int ch(char x)
{
	char y[] = " \t\n,.!?\"(){}";
	int i = 0;

	while (y[i] != '\0')
	{
		if (y[i] == x)
			return (-1);
		i++;
	}
	return (0);
}

/**
 * low - function to check of it is lowercase
 * @d: parameter
 * Return: 1 if success 0 otherwise
*/

int low(char d)
{
	if (d <= 122 && d >= 97)
		return (1);
	else
		return (0);
}

/**
 * *cap_string - function that capitalizes all words of a string
 * @str: parameter
 * Return: string
*/

char *cap_string(char *str)
{
	int k = 0;
	int d = 1;

	while (str[k] != '\0')
	{
		if (ch(str[k]) == -1)
		{
			d = 1;
		}
		else if (d == 1 && low(str[k]) == 1)
		{
			str[k] -= 32;
			d = 0;
		}
		else
			d = 0;
		k++;
	}
	return (str);
}
