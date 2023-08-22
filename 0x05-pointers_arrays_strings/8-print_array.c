#include "main.h"

/**
 * print_array - function that prints n elements
 * @a: parameter
 * @n: parameter
*/

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j != (n - 1))
			printf("%d, ", a[j]);
		else
			printf("%d", a[j]);
	}
	printf("\n");
}
