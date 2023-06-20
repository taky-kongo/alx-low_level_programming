dog.h: This is a header file that define a new type struct dog with the following elements:

	* name, type = char *
	* age, type = float
	* owner, type = char *

1-init_dog.c: This is a function that initialize a variable of type struct dog

	* Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

2-print_dog.c: This is a function that prints a struct dog

	* Prototype: void print_dog(struct dog *d);
	* Format: see example bellow
	* You are allowed to use the standard library
	* If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
	* If d is NULL print nothing.

dog.h: This is a header file that define a new type dog_t as a new name for the type struct dog.
