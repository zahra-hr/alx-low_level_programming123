#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program to print numbers
 * Return: 0 (succes)
*/

int main(void)
{
	int i = 0;
	int j;
	int z;

	while (i < 8)
	{
		z = i + 1;
		while (z <= 8)
		{
			j = z + 1;
			while (j <= 9)
			{
				putchar('0' + i);
				putchar('0' + z);
				putchar('0' + j);
				if (i == 7 && z == 8 && j == 9)
					break;
				putchar(',');
				putchar(' ');
				j++;
			}
			z++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
