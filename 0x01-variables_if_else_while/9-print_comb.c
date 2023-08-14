#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program to print numbers
 * Return: 0 (succes)
*/

int main(void)
{
	int a = 0;

	putchar('0' + a);
	a++;
	while (a < 10)
	{
		putchar(',');
		putchar(' ');
		putchar('0' + a);
		a++;
	}
	return (0);
}
