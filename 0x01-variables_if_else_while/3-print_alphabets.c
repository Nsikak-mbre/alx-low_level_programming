#include <stdio.h>

/**
 *  *  *  *main -is the entry point for the program.
 *   *   *   *
 *    *    *    *Return:lowercase alphabet followed by uppercase
 **/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ;  ch++)
putchar(ch);
for (ch = 'A' ; ch <= 'Z' ; ch++)
putchar(ch);
putchar('\n');
return (0);
}
