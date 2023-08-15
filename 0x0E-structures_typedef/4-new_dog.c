#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to a string representing the name of the dog.
 * @age: Floating point value representing the age of the dog.
 * @owner: Pointer to a string representing the name of the dog's owner.
 *
 * Return: Pointer to the newly created dog_t structure.
 *         If the function fails, returns NULL.
 *
 * Description: This function creates a new dog_t structure,
 * and stores a copy of the name and owner strings in the new structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
int name_length, owner_length;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

name_length = strlen(name) + 1;
owner_length = strlen(owner) + 1;

name_copy = malloc(name_length *sizeof(char));
owner_copy = malloc(owner_length *sizeof(char));
if (name_copy == NULL || owner_copy == NULL)
{
free(new_dog);
free(name_copy);
free(owner_copy);
return (NULL);
}

strncpy(name_copy, name, name_length);
strncpy(owner_copy, owner, owner_length);

new_dog->age = age;
new_dog->name = name_copy;
new_dog->owner = owner_copy;

return (new_dog);
}
