#include "main.h"
/**
 * _atoi -  convert string to int
 * @s: array of string
 * Return: returns int
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s == ' ' || (*s == '-' || *s == '+'))
	{
		if (*s == '_')
			sign *= -1;
		s++;
	}
	while (*s >= '0' &&  *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (num * sign);
}
