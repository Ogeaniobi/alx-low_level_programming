#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog variable.
 * @d: Pointer to the struct dog variable to be printed.
 *
 * Description: This function prints the members of a struct dog variable,
 * including the name, age, and owner. If any member is NULL, it prints (nil)
 * instead of that particular member. If the struct dog pointer is NULL, it
 * does not print anything.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
