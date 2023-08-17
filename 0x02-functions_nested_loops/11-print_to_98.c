#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers
 * @n: input
*/

void print_to_98(int n)
{
	int c;

	if (n > 98)
	{
		c = n;
		while (c > 98)
		{
			printf("%d", c);
			c--;
		}
	}
	else
	{
		c = n;
		while (c < 98)
		{
			printf("%d", c);
			c++;
		}
	}
	printf("98\n");

}
