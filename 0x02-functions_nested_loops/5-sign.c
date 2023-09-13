#include "main.h"

/**
 * _sign - A function that prints the sign of a number
 * @n: is the number to be checked
 * Return: 1 for success 0 for Zero -1 for failure
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}

	
