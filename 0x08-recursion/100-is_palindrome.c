#include "main.h"
/**
 * find_strlen - entry point
 * @s: string to check
 * Return: int 
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	
	return (len);
}
/**
 * check_palindrome - entry point
 * @s: string to check
 * @len: length of string
 * @i: index of string
 * Return: int indicating whether palindrome
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	
	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));
	
	return (0);
}

/**
 * is_palindrome - entry point
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if (!(*s))
		return(1);

	return (check_palindrome(s, len, i);

}
