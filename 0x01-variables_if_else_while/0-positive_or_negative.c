#include <stdlib.h>
#include <time.h>


/**
 *  *  *main -is the entry point for the program.
 *   *   *
 *    *    *Return:indicates positive or negative number.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is postivie\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

