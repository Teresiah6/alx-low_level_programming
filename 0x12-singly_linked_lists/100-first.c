#include <stdio.h>
/**
 * bmain - function to print before main
 *
 */
void bmain (void)__attribute__((constructor));
void bmain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
