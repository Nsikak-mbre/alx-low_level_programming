#include <stdio.h>

/**
 *  *  *  *main -is the entry point for the program.
 *   *   *   *
 *    *    *    *Return:except q and e
 **/
int main(void)
{
char letter;
do {
for (letter = 'a'; letter++;)
putchar (letter);
if (letter == 'q' || letter == 'e')
continue;
} while (letter <= 'z');
putchar ('\n');
return (0);
}
