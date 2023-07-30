#include "main.h"

/**
 *  *  *times_table - multiply in 9 places
 *     **main: the result of the multiplier
 **/
void times_tables(void)
{
int multiplier = 0;
while (multiplier <= 9)
{
int multiplicand = 0;
while (multiplicand <= 9)
{
int result = multiplier * multiplicand;
if (result < 10)
{
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
_putchar(' ');
}
_putchar('\n');
multiplier++;
}
}
