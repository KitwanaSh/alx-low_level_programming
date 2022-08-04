#ifndef CALC_H
#define CALC_H

/**
 * Desc: Header file containing the stuctures and
 *       prototypes used in the 3-main.c file
 */

/**
 * struct op - A struct op to be created
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
