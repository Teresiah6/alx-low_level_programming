#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name - pointer to name
 * @f: pointer to @print_name func
 * return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if( name == NULL || f == NULL)
		return;

	f(name);
}
