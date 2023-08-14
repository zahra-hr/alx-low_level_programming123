#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program to print lowerCase Alphabets without e and q
 * Return: 0 (success)
*/

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l == 'e' || l == 'q')
		{
			l++;
			continue;
		}
		else
		{
			putchar(l);
			l++;
		}
	}
	putchar('\n');
	return (0);
}
