#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords
 * Return: 0
*/

int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
