#include <stdio.h>

/**
 * prime_factor - function to calculate prime factor
 *
 * @n: parameter
 *
 * Return: i success
*/

unsigned long long int prime_factor(unsigned long long int n)
{
	unsigned long long int i = 2;

	while (n > 1)
	{
		if (n % i)
			n = n / i;
		else
			i++;
	}
	return (i);
}
