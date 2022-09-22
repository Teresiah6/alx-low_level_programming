#include "main.h"
/**
 * *rot13 - entry point
 * @n - encoding string
 * Return: returns n
 */
char *rot13(char *n)
{
	int rot = 13;
	int i = 0;
	int x;
	char toSwap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P',
				'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f',
						's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v',
								'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M',
										'Z', 'm', 'z'};
	while(n[i] != '\0')
	{
		for (x =0; x <= 51; x++)
		{
			if (n[i] == toSwap[x]
					{
					
					n[i] = n[i] + rot;
					x = 51;
					}

					rot = rot * - 1;
		}
		i++;
	}

	return(n);

}
