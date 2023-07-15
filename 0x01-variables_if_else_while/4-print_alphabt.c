#include <stdio.h>

/**
 *  *  *  *main -is the entry point for the program.
 *   *   *   *
 *    *    *    *Return:except q and e
 **/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
if (letter == 'a' || letter == 'q')
continue;
putchar('\n');
return (0);
}
