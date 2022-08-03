#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - addition function for sum of numbers
 * @a: first operand
 * @b: second operand
 *
 * Return:  the addition of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function for sum of numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the subtration of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function for sum of numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function for sum of numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the mudolar function operation for sum of numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the modular of of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
