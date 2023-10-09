#include "main.h"
/**
 * string_nconcat - to concatenate two strings
 * @s1: our first string
 * @s2: Our second string
 * @n: index
 * Return: character pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *gentle;
	unsigned int d1, d2, king, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (d1 = 0; s1[d1] != '\0'; d1++)
		;
	for (d2 = 0; s2[d2] != '\0'; d2++)
		;

	if (n > d2)
		n = d2;

	king = d1 + n;

	gentle = malloc(king + 1);

	if (gentle == NULL)
		return (NULL);

	for (i = 0; i < king; i++)
		if (i < d1)
			gentle[i] = s1[i];
		else
			gentle[i] = s2[i - d1];

	gentle[i] = '\0';

	return (gentle);
}
