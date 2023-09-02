#include "main.h"
/**
 * is_prime_number -  function that returns 1 if the input is prime
 * @n: parameter
 * @o: parameter
 * Return: prime number
*/

int check_p(int n, int o);
int is_prime_number(int n)
{
	return (check_p(n, 2));
}
/**
 * check_p - function to check if number is prime
 * @n: parameter
 * @o: parameter
 * Return: prime number
*/

int check_p(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (check_p(n, o + 1));
}
