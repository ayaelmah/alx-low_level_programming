#ifndef DOG_H
#define DOG_H

/**
 * struct dog - description for a pet
 * @name: pet name
 * @age: pet age
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
