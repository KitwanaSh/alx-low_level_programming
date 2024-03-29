#include "function_pointers.h"

/**
 * print_name -  print name
 * @name: name variable parameter char
 * @f: pointer to function declaration
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
