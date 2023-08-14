#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program that print alphabets lowercase and uppercase
 * Return: 0 (succes)
*/

int main(void)
{
	char i = 'a';
	char v = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;

	}
	while (v <= 'Z')
	{
		putchar(v);
		v++;
	}
	putchar('\n');
	return (0);
}
