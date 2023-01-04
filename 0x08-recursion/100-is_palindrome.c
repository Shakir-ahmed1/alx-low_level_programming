#include "main.h"
#include <stdio.h>
int _strlen(char *, int);
int _palindrome(char *, int, int);
/**
 * is_palindrome - checks if a given word is palindrome
 * @s: the string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s, 0);
	if (len == 0)
	{
		return (1);
	}
	return (_palindrome(s, 0, len));
}
/**
 * _strlen - it returns the length of the given string
 * @s: the string
 * @i: counter
 * Return: the length of the string
 */
int _strlen(char *s, int i)
{
	if (*(s + i) != '\0')
	{
		i++;
		return (_strlen(s, i));
	}
	return (i);
}
/**
 * _palindrome - it checks if the string is palindrome
 * @s: the string
 * @n: indexer
 * @len: the length of the string
 * Return: 1 if palindrome, 0 if not
 */
int _palindrome(char *s, int n, int len)
{
	if (s[n] != s[(len - n - 1)] && s[n] != '\0')
	{
		return (0);
	}
	if (len / 2 != n)
	{
		return (_palindrome(s, n + 1, len));
	}
	return (1);

}
