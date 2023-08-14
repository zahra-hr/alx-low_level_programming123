#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program to print alphabets in reverse
 * Return: 0 (succes)
*/

int main(void)
{
	char a = 'z';

	while (a > 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
