#include "function_pointers.h"
#include<stdio.h>
/**
 * print_name - prints a name using a function pointer
 *
 * @name: the name to be printed
 * @f: a pointer to a function that takes a char pointer as an argument
 *     and returns void
 *
 * Description: This function takes a string containing a name and a function
 * pointer that specifies how to print the name. If either parameter is NULL,
 * the function does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
