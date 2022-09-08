#include<stdio.h>
/**
 * main block- void type
 * return (0)
 * datatypes
 * use printf()
 */
int main(void)
{
	char chartype
	int intType;
	long intType;
	long long IntType;
	float floatType;


/**
 *  size of evaluates the size of a variable
 *
 */
	 printf("Size of char: %zu bytes\n", sizeof(charType));
	 printf("Size of int: %zu bytes\n", sizeof (intType));
	 printf("Size of long int: %zu bytes\n", sizeof (intType));
	 printf("Size of long long int: %zu bytes\n",sizeof (intType));
	 printf("Size of float:%zu byte\n", sizeof(floatType));
                  
         return 0;
}
