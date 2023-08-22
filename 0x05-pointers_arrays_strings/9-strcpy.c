#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: parameter
 * @src: parameter
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int j = -1;

	do {
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');
	return (dest);
}
