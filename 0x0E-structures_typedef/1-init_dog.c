#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: Pointer to a string representing the name of the dog.
 * @age: Floating point value representing the age of the dog.
 * @owner: Pointer to a string representing the name of the dog's owner.
 *
 * Description: This function initializes the members of a struct dog variable
 * with the specified name, age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
