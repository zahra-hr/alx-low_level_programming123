#include "main.h"
/**
 * cntw - function that count the num of words
 * @str: parameter
 * Return: int
*/
int cntw(char *str)
{
	int i, n = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
/**
 * **strtow - splits a string into words
 * @str: parameter
 * Return: char
*/
char **strtow(char *str)
{
	int m = 0, cw = 0, i, j, k, l;
	chat **wr;

	if (str == NULL || *str == '\0')
		return (NULL);
	m = cntw(str);
	if (m == 1)
		return (NULL);
	wr = (char **)malloc(m * sizeof(char *));
	if (wr == NULL)
		return (NULL);
	wr[m - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			wr[cw] = (char *)malloc(j * sizeof(char));
			j--;
			if (wr[cw] == NULL)
			{
				for (k = 0; k < cw; k++)
					free(wr[k]);
				free(wr[n - 1]);
				free(wr);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				wr[cw][l] = str[i + l];
			wr[cw][l] = '\0';
			cw++;
			i += j;
		}
		else
			i++;
	}
	return (wr);
}
