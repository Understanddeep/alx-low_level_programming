#include "main.h"
#include <stdio.h>
/**
 * isupper - A function that checks for uppecase character
 *
 * @c: is the character to be considered
 * Return: (1) for success and (0) for otherwise
 */
int _isupper(int c)
{
	char i = 'A';
	char x = 'Z';
	
	if (c >= i && c <= x)
		return (1);
	else
	return (0);

}
	
	

