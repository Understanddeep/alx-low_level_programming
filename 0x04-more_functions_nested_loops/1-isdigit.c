#include "main.h"
#include <stdio.h>

/**
 * isdigit - A function that checks for a digit
 *
 * @c: is the value to be considered
 * Return: 1 for success and 0 for failure
 */
int _isdigit(int c)
{
	int i = '0';
	int x = '9';

	if (c >= i && c <= x)
	return (1);
	else
	return(0);
}
