#include "main.h"
/**
 *  *  *more_numbers - prints numbers 0-14
 *    *    * Return: nothin- its a void function
 */
void more_numbers(void)
{
int i = 0;
int j;
while (i < 10)
{
j = 0;
while (j <= 14)
{
_putchar('0' + j);
j++;
}
_putchar('\n');
i++;
}
_putchar('\n');
}
