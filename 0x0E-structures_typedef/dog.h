#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog.
 * @name: Pointer to a string representing the name of the dog.
 * @age: Floating point value representing the age of the dog.
 * @owner: Pointer to a string representing the name of the dog's owner.
 *
 * Description: This structure defines the properties of a dog, including
 * its name, age, and owner's name.
 */
struct dog
{
char *name;
float age;
char *owner;
};

#endif
