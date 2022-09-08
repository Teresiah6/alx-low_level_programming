#include<unistd.h>
/**
 * main function -Entry point
 *
 * Description: print a sentence, a new line to standard error
 *
 * return always return 1 (Success) -exit point
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
