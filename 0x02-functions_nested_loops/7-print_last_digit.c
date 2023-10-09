#include "main.h"
/**
 *  *  * print_last_digit - prints the last digit
 *   *   * @n: the number
 *    *    * Return: value of the last digit
 *     *
 **/

int print_last_digit(int n)
{
	if (n <= 0)
	{
		n = -n % 10;
		_putchar('0' + n);
	}
	else if (n)
	{
		n = n % 10;
		_putchar(n + '0');
	}
	return (n);
}
