#include "main.h"

/**
 *  *  *times_table - multiply in 9 places
 *     **main: the result of the multiplier
 **/
void times_table(void)
{
	int n, mul, res;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			res = n * mul;

			if (res <= 9)
				_putchar(' ');

			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}

