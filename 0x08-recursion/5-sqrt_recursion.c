#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: parameter
 * @v: parameter
 * Return: square number
*/

int sqr(int n, int v);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
/**
 * sqr - function to find square root
 * @n: parameter
 * @v: parameter
 * Return: square number
*/
int sqr(int n, int v)
{
	if (n == v * v)
		return (v);
	else if (v * v < n)
		return (sqr(n, v + 1));
	else
		return (-1);
}
