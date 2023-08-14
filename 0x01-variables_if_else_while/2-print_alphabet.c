#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program to display Alphabet
 * Return: 0 (success)
*/

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
