#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program to print combination of numbers
 * Return: 0 (succes)
*/

int main(void)
{
	int i = 0;
	int j = i + 1;
	
	while (i < 9)
	{
		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

