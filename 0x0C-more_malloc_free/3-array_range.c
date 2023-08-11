#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array, or NULL if an error occurs.
 *         If min > max, or if malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
int *arr, i, j;

if (min > max)
return (NULL);

int size = max - min + 1;

arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);

for (i = min, j = 0; i <= max; i++, j++)
arr[j] = i;

return (arr);
}
