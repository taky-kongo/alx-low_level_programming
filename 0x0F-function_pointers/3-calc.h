#ifndef __CALC_H__
#define __CALC_H__

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
