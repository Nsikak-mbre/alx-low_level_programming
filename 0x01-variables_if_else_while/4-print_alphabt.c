#include <stdio.h>

/**
 *  *  *  *main -is the entry point for the program.
 *   *   *   *
 *    *    *    *Return:except q and e
 **/
int main(void)
{
char letter = 'a';
while (letter <= 'z' && letter != 'q' || letter != 'e')
{
putchar (letter);
letter++;
}
putchar ('\n');
return (0);
}
