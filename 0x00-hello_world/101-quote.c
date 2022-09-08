#include<unistd.h>
/**
 * main function - prints a sentecefollowed by a new line to standard error
 *
 * return alway return 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
