#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program to print combination of numbers
 * Return: 0 (succes)
*/

int main(void)
{
	int i = 0;
	int j;

	while (i < 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

