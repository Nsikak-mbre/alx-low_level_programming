#include <stdio.h>

/**
 *  *  *  *main -is the entry point for the program.
 *   *   *   *
 *    *    *    *Return:lowercase alphabet followed by uppercase
 **/
int main(void)
{
char s;
for (s = 'a' ; s <= 'z' ;  s++)
putchar(s);
for (s = 'A' ; s <= 'Z' ; s++)
putchar(s);
putchar('\n');
return (0);
}
