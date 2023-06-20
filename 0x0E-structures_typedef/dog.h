#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - the structure of the dog
 * dog_t - typedef of the structure
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: the structure of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
