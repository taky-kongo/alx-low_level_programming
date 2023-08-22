#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - a new struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a new struct of the dog with the name, the age and the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
