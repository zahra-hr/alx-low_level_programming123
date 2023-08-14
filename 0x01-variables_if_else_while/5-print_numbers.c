#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program to print numbers
 * Return: 0 (succes)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
