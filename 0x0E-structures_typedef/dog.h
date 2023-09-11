#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Represents information about a dog.
 * @name: Pointer to a character array for the dog's name.
 * @age: The age of the dog as a floating-point number.
 * @owner: Pointer to a character array for the owner's name.
 *
 * Description: This structure defines the elements representing a dog's
 * information, including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

