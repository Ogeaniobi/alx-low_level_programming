#include  "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with char.
 * @size: The size of the array.
 * @c: The char with which to initialize the array.
 *
 * Return: A pointer , or NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
char *array;

if (size == 0)
return (NULL);

array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);

for (unsigned int i = 0; i < size; i++)
array[i] = c;

return (array);
}
