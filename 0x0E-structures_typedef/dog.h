#ifndef DOG_H
#define DOG_H

/**
 * struct dog - description for a pet
 * @name: pet name
 * @age: pet age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
