#include <stdio.h>

void print_before(void) __attribute__((constructor));

/**
 * print_before - print before the main function
 */
void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
