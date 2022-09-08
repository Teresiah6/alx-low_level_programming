#include<unistd.h>
/**
 * main function -Entry point
 *
 * Description: prints a "and that peice of art ..." followed by a new line to standard error
 *
 * return alway return 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
