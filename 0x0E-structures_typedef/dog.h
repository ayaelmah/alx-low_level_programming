#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structers.
 * @name: parameetr.
 * @owner: param2.
 * @age: an age param
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
