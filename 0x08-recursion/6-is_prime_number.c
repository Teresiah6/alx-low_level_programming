#include "main.h"
/**
 * is_prime_number - entry point
 * @n: prime number
 * Return: return 1 if a prime number otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i != 0)
			continue;
		else
			return 1;
	}

	return (n * is_prime_number(n - 1));

}
