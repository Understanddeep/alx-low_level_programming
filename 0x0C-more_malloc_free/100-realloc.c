#include "main.h"

/**
 * _realloc - will reallocate  memory block using malloc and free
 * @ptr: the pointer
 * @old_size: our old size
 * @new_size: our new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem, *relloc;
	unsigned int i;

	if (ptr != NULL)
	mem = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = mem[i];
	}
	free(ptr);
return (relloc);
}
