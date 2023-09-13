#include "main.h"

/**
 * print_alphabet_x10- print 10 times the alphabet in lower case
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char low_10;
	int b;

	b = 0;

	while (b < 10)
	{
		low_10 = 'a';
		while (low_10 <= 'z')
		{
			_putchar(low_10);
			low_10++;
		}
		_putchar('\n');
		b++;
	}
}
