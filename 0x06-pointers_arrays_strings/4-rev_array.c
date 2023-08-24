#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: parameter
 * @n: parameter
*/

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int t;

	for (i = n - 1; i > j; i--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		j++;
	}
}
