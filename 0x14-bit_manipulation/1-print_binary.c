#include "main.h"
/**
 * print_binary - print binary rep of num
 * @n: the num
 * return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1UL << (sizeof(unsigned long int) * 8 - 1);

	int leading_zeros = 1;

   	 while (i) {
       		 if (n & i) {
           	 	leading_zeros = 0;
            		_putchar('1');
       		 } else if (!leading_zeros) {
            		_putchar('0');
       		 }
        
       		 mask >>= 1;
    }

    if (leading_zeros) {
        _putchar('0');
    }

}
