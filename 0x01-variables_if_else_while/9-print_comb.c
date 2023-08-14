#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program to print numbers
 * Return: 0 (succes)
*/

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		if (a == 9)
			break;
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('$');
	return (0);
}
