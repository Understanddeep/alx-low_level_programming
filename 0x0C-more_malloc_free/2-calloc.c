#include "main.h"
#include <stdlib.h>
/**
 * _calloc - will allocate memory for an array.
 * @nmemb: number of the elements.
 * @size: the size of bytes.
 *
 * Return: pointer to allocated memory.
 * if nmemb or size is 0, will return NULL.
 * if malloc fails,to also return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;

	return (mem);
}
