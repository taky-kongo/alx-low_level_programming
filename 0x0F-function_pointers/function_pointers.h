#ifndef __FUNCTIONPOINTERS_H__
#define __FUNCTIONPOINTERS_H__

#include <stddef.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif
