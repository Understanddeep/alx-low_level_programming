#include "main.h"

/**
 * print_square - print a  square followed by new line
 * @size: is the size of the square
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int a, b;

		for (a = 0; a < size; a++)
			for(b = 0; b < size; b++)
				_putchar('#');
	}
}
