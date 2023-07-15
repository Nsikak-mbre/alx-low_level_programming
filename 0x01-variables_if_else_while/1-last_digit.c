#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  *  *  *main -is the entry point for the program.
 *   *   *   *
 *    *    *    *Return:the last digit in a variable
 */
int main(void)
{
int n, LastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
LastDigit = n % 10;
if (LastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, LastDigit);
}
else if (LastDigit == 0)
{
printf("Last digit of %d is %d and is 0", n, LastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, LastDigit);
}
return (0);
}
