#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory block to be reallocated.
 * @old_size: The size of the original memory block.
 * @new_size: The new size of the memory block.
 *
 * Return: A pointer to the reallocated memory block.
 *         If new_size is zero and ptr is not NULL, return NULL.
 *         If malloc fails to allocate memory, return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
}
else
{

if (new_size == old_size)
return (ptr);

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

if (new_size > old_size)
new_size = old_size;
for (unsigned int i = 0; i < new_size; i++)
((char *)new_ptr)[i] = ((char *)ptr)[i];

free(ptr);
}

return (new_ptr);
}
