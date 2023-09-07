#include "main.h"
/**
 * *_mem - function to fills memory
 * @a: parameter
 * @b: parameter
 * @n: parameter
 * Return: pointer p
*/
char *_mem(char *a, char b, unsigned int n)
{
	char *p = a;

	while (n--)
		*a++ = b;
	return (p);
}
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: parameter
 * @size: parameter
 * Return: n or null
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;

	if (size == 0 || nmemb == 0)
		return (NULL);
	n = malloc(sizeof(int) * nmemb);
	if (n == 0)
		return (NULL);
	_mem(n, 0, sizeof(int) * nmemb);
	return (n);
}
