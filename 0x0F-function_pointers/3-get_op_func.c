#include "3-calc.h"
/**
 * get_op_func - select correct function
 * @s: char array
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	    int i;

	    i = 0;

	    
}
