#include "main.h"
/**
 * last_index - function to get the last index
 * @s: parameter
 * Return: integer
*/
int is_palindrome(char *s);
int check(char *s, int start, int end, int m);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: parameter
 * Return: Integer
*/
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - function to check if a string is palindrome
 * @s: parameter
 * @start: parameter
 * @end: parameter
 * @m: parameter
 * Return: Integer
*/
int check(char *s, int start, int end, int m)
{
	if ((start == end && m != 0) || (start == end + 1 && m == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, m));
}
