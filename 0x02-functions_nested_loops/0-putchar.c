#include "main.h"
/**
 * * main - print putchar followed by a new line
 * * Return: 0 (success)
 */
int main(void)
{
char word [] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i;
for (i = 0 ; i <= 8 ; i++)
{
_putchar(word[i]);
putchar("\n");
}
return (0);
}

