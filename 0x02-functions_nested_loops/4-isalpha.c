#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is the letter to be checked
 * Return: 1 for success and 0 failure
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
