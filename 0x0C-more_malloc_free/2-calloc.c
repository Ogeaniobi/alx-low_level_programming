#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, or if malloc fails, return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

memset(ptr, 0, nmemb * size);

return (ptr);
}
