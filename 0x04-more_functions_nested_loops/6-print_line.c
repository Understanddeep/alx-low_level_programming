#include "main.h"

/**
 *print_line - a function to print a line
 *@n: u tge bynber if times the character _ should be added
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	
	
	else
	{
		int a;

		for (a = 1; a <= n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
