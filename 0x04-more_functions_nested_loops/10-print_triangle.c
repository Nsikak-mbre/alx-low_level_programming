#include "main.h"
/**
 *  *  * print_triangle - creates a triangle
 *   *   * @size: the character
 *    *    * Return: result showing a triangle impression
 **/

void print_triangle(int size)
{
	int col, shape;

	if (size > 0)
	{
		for (col = 1; col <= size; col++)
		{
			for (shape = size - col; shape > 0; shape--)
				_putchar(' ');
			for (shape =  0; shape < col; shape++)
				_putchar('#');
			if (col == size)
				continue;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
