#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to copy from s2.
 *
 * Return:newly allocated string containing s1 followed by first n bytes of s2,
 *         or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i;
char *concatenated;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
n = len2;

concatenated = malloc(sizeof(char) * (len1 + n + 1));
if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (i = 0; i < n; i++)
concatenated[len1 + i] = s2[i];

concatenated[len1 + n] = '\0';

return (concatenated);
}
