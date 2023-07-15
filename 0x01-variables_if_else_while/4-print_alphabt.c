#include <stdio.h>

/**
 *  *  *  *main -is the entry point for the program.
 *   *   *   *
 *    *    *    *Return:except q and e
 **/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z' ; letter++)
{
if (letter == 'q' || letter == 'e')
{
continue;
putchar(letter);
}
putchar ('\n');
}
return (0);
}
