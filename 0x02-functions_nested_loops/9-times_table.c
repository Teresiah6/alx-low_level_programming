#include "main.h"
#include<math.h>
/**
 * times_table - entry point
 *
 * Descrip[tion: function that prints 9 times table
 *
 * Return: always 0
 */
void times_table(void)
{
	
	int j;



	for (j = 0; j < 10; j++)
	{
		int ans;
		ans = (9 * (9 ^ j));
		_putchar (ans);
		_putchar ('\n');
		
	}
}
