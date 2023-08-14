#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program to print numbers with putchar
 * Return: 0 (succes)
*/

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
