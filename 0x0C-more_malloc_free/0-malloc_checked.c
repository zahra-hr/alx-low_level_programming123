#include "main.h"
/**
 * *malloc_checked - function that allocates memory
 * @b: parameter
 * Return: pointer x
*/
void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
		exit(98);
	return (x);
}
