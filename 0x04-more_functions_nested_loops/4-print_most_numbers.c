#include "main.h"

/**
 * print_most_numbers - A function that prints numbers 0-9 except 2 and 4
 *
 * Return: 0 always
 */
void print_most_numbers(void)
{
	int a = '0';
	for (a = '0'; a <= '9' ; a++)
	
	if (a != '2' && a != '4')
		_putchar(a);
	_putchar('\n');
}
