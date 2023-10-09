#include "main.h"

/**
 * array_range - will creat an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ray, i = 0, d = min;

	if (min > max)
		return (0);
	ray = malloc((max - min + 1) * sizeof(int));

	if (!ray)
		return (0);
	while (i <= max - min)
		ray[i++] = d++;
	return (ray);
}
