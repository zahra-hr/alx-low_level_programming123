#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program to print numbers and alphabets
 * Return: 0 (succes)
*/

int main(void)
{
	int n = 0;
	char c = 'a';

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
