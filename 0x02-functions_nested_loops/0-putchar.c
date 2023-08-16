#include "main.h"
/**
 * main - Entry point
 * Description: A C program to print _putchar
 * Return: 0 (succes)
*/

int main(void)
{
	char wrd[] = "_putchar";
	int i = 0;

	while (wrd[i] != '\0')
	{
		_putchar(wrd[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
