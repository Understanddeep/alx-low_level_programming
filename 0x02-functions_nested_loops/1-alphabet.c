#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char low_letters;

	for (low_letters = 'a'; low_letters <= 'z'; low_letters++)
		_putchar(low_letters);

	_putchar('\n');
}
