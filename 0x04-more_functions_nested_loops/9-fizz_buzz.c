#include <stdio.h>

/**
 * main - A C program to write fizz buzz
 *
 * Description: program that prints the numbers from 1 to 100
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;

	}
	printf("\n");
	return (0);
}
