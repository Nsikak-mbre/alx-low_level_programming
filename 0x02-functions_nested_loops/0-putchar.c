#include "main.h"
#define MAXSTRING 80
/**
 * * main - print putchar followed by a new line
 * * Return: 0 (success)
 */

int main(void)
{
char message[] = "_putchar";
for (int count =  0; count < MAXSTRING; count++)
{
if (message[count] == '\0')
{
putchar('\n');
break;
}
else
putchar(message[count]);
}
return (0);
}
