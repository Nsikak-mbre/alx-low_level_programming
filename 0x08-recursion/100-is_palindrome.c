#include <stdio.h>
#include "main.h"
/**
  * palindrome_helper - helper function for palindrome
  * @start: points to first character in string
  * @end: points to last character of the string
  * Return: yes on success, 1 on failure
  */
int palindrome_helper(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start == *end)
	{
		return (palindrome_helper(start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}

/**
  * is_palindrome - calls helper function recursively
  * @s: string to recurse
  * Return: 0 on Sucess, 1 otherwise
  */

int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (palindrome_helper(s, s + len - 1));
}


