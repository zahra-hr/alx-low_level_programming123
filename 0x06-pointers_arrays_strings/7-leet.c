#include "main.h"

/**
 * inArray - function to chack if var in array
 * @arr: parameter
 * @o: parameter
 * @b: parameter
 * Return: char
*/

char inArray(char *arr, char o, char *b)
{
	int i = 0;

	while (arr[i] != '\0')
	{
		if (o == b[i])
			o = arr[i];
		i++;
	}
	return (o);
}
/**
 * *leet - function that encodes a string into 1337
 * @x: parameter
 * Return: char
*/

char *leet(char *x)
{
	int i = 0;
	char d[] = "43071";
	char s[] = "aeotl";
	char j[] = "AEOTL";

	while (x[i] != '\0')
	{
		x[i] = inArray(d, x[i], s);
		x[i] = inArray(d, x[i], j);
		i++;
	}
	return (x);
}
